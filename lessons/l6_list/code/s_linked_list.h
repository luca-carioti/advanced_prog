#ifndef S_LINKED_LIST
#define S_LINKED_LIST

typedef int generic_t;
typedef struct node {
	generic_t info;
	struct node *next;
} node_t, *p_node_t;

void init(p_node_t*);
void add(p_node_t*, generic_t);
int remove_sl_list(p_node_t*, generic_t);
int contains(p_node_t, generic_t);

#endif
