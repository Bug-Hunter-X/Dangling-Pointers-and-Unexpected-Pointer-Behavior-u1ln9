int main() {
    int x = 10;
    int *ptr = &x; 
    *ptr = 20; 
    printf("%d", x); //Expected output 20, but may cause unexpected behavior
    int y = 20;
    ptr = &y; 
    *ptr = 30;
    printf("%d", x); //Expected output 20, but may cause unexpected behavior
    return 0; 
}