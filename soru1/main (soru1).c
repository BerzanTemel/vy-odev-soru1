#include <stdio.h>

int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    // a) Dizinin boyutunu ve elemanlarını kullanıcıdan isteyiniz.
    int size;
    printf("Dizinin boyutunu girin: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Elemanları girin:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // b) Dizide aranacak olan elemanı kullanıcıdan isteyiniz.
    int target;
    printf("Aranacak elemanı girin: ");
    scanf("%d", &target);
    
    // c) Aranılan elemanın dizide olup olmadığının kontrolünü Linear Search kullanarak yapınız.
    int index = linear_search(arr, size, target);
    if (index != -1) {
        printf("Eleman bulundu, dizinin %d. indeksinde.\n", index);
    } else {
        printf("Eleman bulunamadı.\n");
    }
    
    return 0;
}
