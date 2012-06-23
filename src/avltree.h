#ifndef AVLTREE_H
#define AVLTREE_H

#include <QtCore>
#include <cstdlib>
#include <cmath>

//extern AvlTree <ClientHandler> clientHandler;

using std::abs;

template< typename T >
class AvlTree
{
	public:
		AvlTree();
		~AvlTree();

		bool add( const T &item );
		bool del( const T &item );
		bool find( const T &item );
		void clear_all();
		bool is_empty_tree();
		void print();

	protected:
		struct Node
		{
			T data;
			Node *left;
			Node *right;
			int balance;
		} *root;

	private:
		void all_rotation( Node *&cur_node );
		void small_left_rotation( Node *&cur_node );
		void small_right_rotation( Node *&cur_node );
		void big_left_rotation( Node *&cur_node );
		void big_right_rotation( Node *&cur_node );

		void inorder( const Node *cur_node);
		bool find( const T &item, T *cur_item_tree );

		bool recursive_add( Node *new_node, Node *cur_node, Node *prev_node = NULL );
		bool recursive_del( Node *&cur_node, const T &item, Node *prev_node = NULL );
		void search_replacement( Node *&cur_node, Node *&prev_node );
		void recursive_clear( Node *&cur_node );
		bool recursive_find( const Node *cur_node, const T &item );

}; // end class AvlTree

template< typename T >
AvlTree< T >::AvlTree() : root( NULL )
{
} // end constructor AvlTree

template< typename T >
AvlTree< T >::~AvlTree()
{
	clear_all();
} // end destructor AvlTree

template< typename T >
bool AvlTree< T >::is_empty_tree()
{
	return root == NULL;
} // end function is_empty_tree

template< typename T >
bool AvlTree< T >::add( const T &item )
{
	bool is_insert;

	Node *new_node = new Node;
	new_node->data = item;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->balance = 0;

	if( root != NULL )
		is_insert = recursive_add( new_node, root );
	else
	{
		root = new_node;
		is_insert = true;
	} // end if..else

	if (!is_insert)
		delete new_node;

	return is_insert;
} // end function add

template< typename T >
bool AvlTree< T >::recursive_add( Node *new_node, Node *cur_node, Node *prev_node )
{
	bool is_insert;

	if( cur_node != NULL && cur_node->data == new_node->data )
		return false;
	else
	{
		if( cur_node == NULL )
		{
			if( prev_node->data > new_node->data )
				prev_node->left = new_node;
			else
				prev_node->right = new_node;

			return true;
		} // end if
		else
		{
			if( cur_node->data > new_node->data )
			{
				is_insert = recursive_add( new_node,
										   cur_node->left, cur_node );
			} // end if
			else
			{
				is_insert = recursive_add( new_node,
										   cur_node->right, cur_node );
			} // end if..else

			if( is_insert )
			{
				cur_node->balance = 0;

				if( cur_node->left != NULL )
					cur_node->balance += -abs( cur_node->left->balance ) - 1;

				if( cur_node->right != NULL )
					cur_node->balance += abs( cur_node->right->balance ) + 1;

				if( abs( cur_node->balance ) == 2 )
					all_rotation( cur_node );
			} // end if

		} // end if..else
	} // end if..else

	return is_insert;
} // end function add

template< typename T >
void AvlTree< T >::search_replacement( Node *&cur_node, Node *&prev_node )
{
	Node *cur_node_2;
	Node *parent;

	if( cur_node->left != NULL && cur_node->right != NULL )
	{
		parent = cur_node;
		cur_node_2 = cur_node->right;

		while( cur_node_2->left != NULL )
		{
			parent = cur_node_2;
			cur_node_2 = cur_node_2->left;
		} // end if

		cur_node->data = cur_node_2->data;

		if( parent != cur_node )
		{
			parent->left = cur_node_2->right;
			parent->balance++;
		} // end if
		else
		{
			parent->right = cur_node_2->right;
			parent->balance--;
		} // end if..else

		if( abs( parent->balance ) == 2 )
			all_rotation( parent );

		cur_node->balance = cur_node->left->balance + parent->balance;

		if( abs( cur_node->balance ) == 2 )
			all_rotation( cur_node );

		cur_node_2->right = NULL;
		cur_node_2->left = NULL;
		delete cur_node_2;
		cur_node_2 = NULL;

		} // end if
		else
		{
			if( prev_node != NULL )
			{
			if( cur_node->left == NULL )
			{
				if( prev_node->left == cur_node )
				{
					prev_node->left = cur_node->right;
					prev_node->balance++;
				} // end if
				else if( prev_node->right != NULL )
				{
					prev_node->right = cur_node->right;
					prev_node->balance--;
				} // end if..else

				if( abs( prev_node->balance ) == 2 )
					all_rotation( prev_node );
			} // end if

			if( cur_node->right == NULL )
			{
				if( prev_node->left == cur_node )
				{
					prev_node->left = cur_node->left;
					prev_node->balance++;
				} // end if
				else if( prev_node->right != NULL )
				{
					prev_node->right = cur_node->left;
					prev_node->balance--;
				} // end if..else

				if( abs( prev_node->balance ) == 2 )
					all_rotation( prev_node );
			} // end if
			} // end if

			cur_node->left = NULL;
			cur_node->right = NULL;
			delete cur_node;
			cur_node = NULL;
		} // end if..else
} // end function search_replacement

template< typename T >
bool AvlTree< T >::recursive_del( Node *&cur_node, const T &item, Node *prev_node )
{
	bool is_remove;
	Node *parent;
	Node *cur_node_2;

	if( cur_node == NULL )
		return false;
	else
	{
		if( cur_node->data == item )
		{
			search_replacement( cur_node, prev_node );

			return true;
		} // end if
		else
		{
			if( cur_node->data > item )
				is_remove = recursive_del( cur_node->left, item, cur_node );
			else
				is_remove = recursive_del( cur_node->right, item, cur_node );

			if( is_remove )
			{
				cur_node->balance = 0;

				if( cur_node->left != NULL )
					cur_node->balance += -abs( cur_node->left->balance ) + 1;

				if( cur_node->right != NULL )
					cur_node->balance += abs( cur_node->right->balance ) - 1;

				if( abs( cur_node->balance ) == 2 )
					all_rotation( cur_node );
			} // end if
		} // end if
	} // end if

	return is_remove;
} // end function recurive_del

template< typename T >
void AvlTree< T >::print()
{
	if( root != NULL )
		inorder( root );
} // end function print

template< typename T >
void AvlTree< T >::inorder( const Node *cur_node )
{
	Node *tmp;

	if( cur_node != NULL )
	{
		tmp = cur_node->left;
		inorder( tmp );

		//cout << cur_node->data << " ";
		tmp = cur_node->right;

		inorder( tmp );
	} // end if
} // end function inorder

template< typename T >
void AvlTree< T >::clear_all()
{
	if( root != NULL )
		recursive_clear( root );
} // end function clear_all

template< typename T >
void AvlTree< T >::recursive_clear( Node *&cur_node )
{
	if( cur_node != NULL )
	{
		recursive_clear( cur_node->left );
		recursive_clear( cur_node->right );
		delete cur_node;
		cur_node = NULL;
	} // end if
} // end function recursive_clear


template< typename T >
bool AvlTree< T >::del( const T &item )
{
	bool is_delete;

	if( root != NULL )
		is_delete = recursive_del( root, item );
	else
		is_delete = false;

	return is_delete;
} // end function del

template< typename T >
void AvlTree< T >::all_rotation( Node *&cur_node )
{
	Node *b;
	int c_balance, L_balance, C_balance, R_balance;

	// пороверка на малое левое вращение
	b = cur_node->right;
	if( b != NULL )
	{
		C_balance = b->left != NULL? b->left->balance : 0;
		R_balance = b->right != NULL? b->right->balance : 0;
	} // end else

	if( b != NULL && C_balance <= R_balance )
		small_left_rotation( cur_node );
	else
	{
		b = cur_node->left;
		if( b != NULL )
		{
			L_balance = b->left != NULL? b->left->balance : 0;
			C_balance = b->right != NULL? b->right->balance : 0;
		} // end if

	if( b != NULL && C_balance <= L_balance )
		small_right_rotation( cur_node );
	else
	{
		b = cur_node->left;
		if( b != NULL )
		{
			L_balance = b->left != NULL? b->left->balance : 0;
			c_balance = b->right != NULL? b->right->balance : 0;
		} // end if
	if( b != NULL && c_balance > L_balance )
		big_right_rotation( cur_node );
	else
	{
		big_left_rotation( cur_node );
	} // end if..else
	} // end if..else
	} // end if..else
} // end function all_rotation

template< typename T >
void AvlTree< T >::small_left_rotation( Node *&cur_node )
{
	Node *a = cur_node;
	Node *b = a->right;
	Node *L = a->left;
	Node *C = b->left;
	Node *R = b->right;

	Node *tmp_node_1 = new Node;

	tmp_node_1->data = a->data;
	tmp_node_1->left = L;
	tmp_node_1->right = C;
	tmp_node_1->balance = L != NULL ? L->balance : 0 + C != NULL ? C->balance : 0;

	cur_node->data = b->data;
	cur_node->left = tmp_node_1;
	cur_node->right = R;
	cur_node->balance = R != NULL ? R->balance : 0 + tmp_node_1->balance;

	b->right = NULL;
	b->left = NULL;
	delete b;
} // end function small_left_rotation

template< typename T >
void AvlTree< T >::small_right_rotation( Node *&cur_node )
{
	Node *a = cur_node;
	Node *b = a->left;
	Node *L = b->left;
	Node *C = b->right;
	Node *R = a->right;

	Node *tmp_node_1 = new Node;
	tmp_node_1->data = a->data;
	tmp_node_1->left = C;
	tmp_node_1->right = R;
	tmp_node_1->balance = C != NULL? C->balance : 0 + R != NULL? R->balance : 0;

	cur_node->data = b->data;
	cur_node->right = tmp_node_1;
	cur_node->left = L;
	cur_node->balance = L != NULL? L->balance : 0 + tmp_node_1->balance;

	b->right = NULL;
	b->left = NULL;
	delete b;
} // end function small_right_rotation

template< typename T >
void AvlTree< T >::big_left_rotation( Node *&cur_node )
{
	Node *tmp_node_1;
	Node *tmp_node_2;

	Node *a = cur_node;
	Node *b = a->right;
	Node *L = a->left;
	Node *R = b->right;
	Node *c = b->left;
	Node *M = c->left;
	Node *N = c->right;

	// формируем новый узел a
	tmp_node_1->data = a->data;
	tmp_node_1->left = L;
	tmp_node_1->right = M;
	tmp_node_1->balance = L != NULL? L->balance : 0 + M != NULL? M->balance : 0;

	// формируем новый узел b
	tmp_node_2->data = b->data;
	tmp_node_2->left = N;
	tmp_node_2->right = R;
	tmp_node_2->balance = N != NULL? N->balance : 0 + R != NULL? R->balance : 0;

	cur_node->data = c->data;
	cur_node->left = tmp_node_1;
	cur_node->right = tmp_node_2;
	cur_node->balance = tmp_node_1->balance + tmp_node_2->balance;

	c->left = NULL;
	c->right = NULL;
	delete c;
} // end functino big_left_rotation

template< typename T >
void AvlTree< T >::big_right_rotation( Node *&cur_node )
{
	Node *tmp_node_1 = new Node;
	Node *tmp_node_2 = new Node;

	Node *a = cur_node;
	Node *b = a->left;
	Node *L = b->left;
	Node *R = a->right;
	Node *c = b->right;
	Node *M = c->left;
	Node *N = c->right;

	// формируем новый узел a
	tmp_node_1->data = a->data;
	tmp_node_1->left = N;
	tmp_node_1->right = R;
	tmp_node_1->balance = N != NULL? N->balance : 0 + R != NULL? R->balance : 0;

	// формируем новый узел b
	tmp_node_2->data = b->data;
	tmp_node_2->left = L;
	tmp_node_2->right = M;
	tmp_node_2->balance = L != NULL? L->balance : 0 + M != NULL? M->balance : 0;

	cur_node->data = c->data;
	cur_node->left = tmp_node_1;
	cur_node->right = tmp_node_2;
	cur_node->balance = tmp_node_1->balance + tmp_node_2->balance;

	c->left = NULL;
	c->right = NULL;
	delete c;
} // end function big_right_rotation

template < typename T >
bool AvlTree< T >::find( const T &item )
{
	bool if_find;

	if( root != NULL )
		if_find = recursive_find( root, item );
	else
		if_find = false;

	return if_find;
} // end function find

template< typename T >
bool AvlTree< T >::recursive_find( const Node *cur_node, const T &item )
{
	bool is_find;

	if( cur_node == NULL )
		return false;
	{
		if( cur_node->data == item )
			return true;
		else
		{
			if( cur_node->data > item )
				is_find = recursive_find( cur_node->left, item );
			else
				is_find = recursive_find( cur_node->right, item );
		} // end if..else
	} // end if

	return is_find;
} // end function recursive_find
#endif // AVLTREE_H
