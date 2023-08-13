// Allocate memory for array of list heads
struct head_t *alloc_list_heads(int size) {
    return malloc( sizeof(struct head_t) * size );
}

// Read input and Initialize array of linked-lists
void init_head_arr(struct head_t *arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i].orb = getchar() - 'A';
        arr[i].head = NULL;
    }
    return;
}

// Insert the next orb onto the magic circle
void insert_next(struct head_t *arr, int size, const char c) {
    return;
}
