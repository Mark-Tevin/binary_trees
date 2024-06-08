#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses through the tree using in-order traversal
 * @tree: pointer to root node of tree to traverse
 * @func: pointer to a func to call for each
 * If tree or func is NULL, do nothinh
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
