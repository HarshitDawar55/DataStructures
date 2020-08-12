struct rectangle{
    int length;
    int breadth;
};

void swap(struct rectangle *p){
    int temp = p->length;
    p->length = p->breadth;
    p->breadth = temp;
}

int main(){
    struct rectangle rec = {10, 5};
    printf("Initial values = %d %d\n");
    return 0;
}