#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Common ancestor if found, otherwise NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
                                      const binary_tree_t *second)
{
    binary_tree_t *temp;
    binary_tree_t *ancestor = NULL;

    if (first == NULL || second == NULL)
        return (NULL);

    while (first != NULL)
    {
        temp = (binary_tree_t *)second;
        while (temp != NULL)
        {
            if (first->n == temp->n)
                ancestor = (binary_tree_t *)first;
            temp = temp->parent;
        }
        if (ancestor != NULL)
            break;
        first = first->parent;
    }

    return (ancestor);
}
