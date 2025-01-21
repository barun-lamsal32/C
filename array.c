#include <stdio.h>

int main() {
    int n, count = 0, target;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &target);
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            count++;
        }
    }
    printf("The element %d occurs %d times.\n", target, count);

    return 0;
}
