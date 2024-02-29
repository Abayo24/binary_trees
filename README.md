# Project Title: Binary Trees

## Project Description
This project implements various functions related to binary trees in C. It includes functions to create nodes, insert nodes as left or right children, delete an entire binary tree, check if a node is a leaf, check if a node is a root, and perform different traversals (pre-order, in-order, post-order) on the binary tree. Additionally, there are functions to measure the height, depth, size, count leaves and nodes with at least one child, calculate the balance factor, and check if a binary tree is full or perfect.

## File Descriptions

### 0-binary_tree_node.c
- Function: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
  - Creates a binary tree node.

### 1-binary_tree_insert_left.c
- Function: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
  - Inserts a node as the left-child of another node.

### 2-binary_tree_insert_right.c
- Function: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
  - Inserts a node as the right-child of another node.

### 3-binary_tree_delete.c
- Function: `void binary_tree_delete(binary_tree_t *tree);`
  - Deletes an entire binary tree.

### 4-binary_tree_is_leaf.c
- Function: `int binary_tree_is_leaf(const binary_tree_t *node);`
  - Checks if a node is a leaf.

### 5-binary_tree_is_root.c
- Function: `int binary_tree_is_root(const binary_tree_t *node);`
  - Checks if a given node is a root.

### 6-binary_tree_preorder.c
- Function: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
  - Traverses a binary tree using pre-order traversal.

### 7-binary_tree_inorder.c
- Function: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`
  - Traverses a binary tree using in-order traversal.

### 8-binary_tree_postorder.c
- Function: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`
  - Traverses a binary tree using post-order traversal.

### 9-binary_tree_height.c
- Function: `size_t binary_tree_height(const binary_tree_t *tree);`
  - Measures the height of a binary tree.

### 10-binary_tree_depth.c
- Function: `size_t binary_tree_depth(const binary_tree_t *tree);`
  - Measures the depth of a node in a binary tree.

### 11-binary_tree_size.c
- Function: `size_t binary_tree_size(const binary_tree_t *tree);`
  - Measures the size of a binary tree.

### 12-binary_tree_leaves.c
- Function: `size_t binary_tree_leaves(const binary_tree_t *tree);`
  - Counts the leaves in a binary tree.

### 13-binary_tree_nodes.c
- Function: `size_t binary_tree_nodes(const binary_tree_t *tree);`
  - Counts the nodes with at least one child in a binary tree.

### 14-binary_tree_balance.c
- Function: `int binary_tree_balance(const binary_tree_t *tree);`
  - Measures the balance factor of a binary tree.

### 15-binary_tree_is_full.c
- Function: `int binary_tree_is_full(const binary_tree_t *tree);`
  - Checks if a binary tree is full.

### 16-binary_tree_is_perfect.c
- Function: `int binary_tree_is_perfect(const binary_tree_t *tree);`
  - Checks if a binary tree is perfect.
