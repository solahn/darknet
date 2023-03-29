#define number_G 500
#define number_L 500
#define MAX_memory 9437184 // 9 MB

typedef struct {
    int group_id;
    int group_members;
    int group_memory;
    int split_layer_ids[number_L];
    int split_layer_nums[number_L];
} Group;


int max_size_of_layer;
int max_size_of_layer_id;
float max_layer_size;

int split_num;

int split_status[500];