#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Recursively traverses `binary_tree_t` binary tree.
 *
 * @tree: Pointer to root node of tree or subtree.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
