int main() {
    int x = 10;
    int *ptr = &x; 
    *ptr = 20; 
    printf("x = %d\n", x); //Output: 20

    int y = 20;
    ptr = &y;
    *ptr = 30;
    printf("x = %d, y = %d\n", x, y); //Output: x = 20, y = 30

    //This section will always be executed and will always have defined behavior
    int z = 10;
    int *ptr_z = &z; 
    *ptr_z = 20;
    printf("z = %d\n", z); //Output: 20

    return 0;
}