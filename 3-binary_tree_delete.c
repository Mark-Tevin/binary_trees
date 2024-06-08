#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to root node of the tree tobe deleted
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	/**
	 * Use of Post-order traversal to recursively delete nodes
	 * To ensure that all child noes are deleted first
	 * before the parent
	 */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* Delete current node */
	free(tree);
}
