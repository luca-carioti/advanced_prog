#ifndef LINKED_LIST
#define LINKED_LIST

typedef int generic_t;
typedef struct node {
	generic_t info;
	struct node *next;
	struct node *prev;
} node_t, *p_node_t;

void init(p_node_t*, p_node_t*);
void add_first(p_node_t*, p_node_t*,  generic_t);
void add_last(p_node_t*, p_node_t*,  generic_t);
int find_and_remove(p_node_t*, generic_t);
int remove_first(p_node_t*);
int remove_last(p_node_t*);
int contains(p_node_t, generic_t);
void print_list(p_node_t);
void clear(p_node_t);

#endif
