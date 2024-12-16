#include <stdio.h>

void inputItem(int *arr, int *size){
	printf("Moi ban nhap so luong phan tu: ");
	scanf("%d", &*size);
	for(int i=0; i<*size; i++){
		printf("Phan tu thu %d la: ", i+1);
		scanf("%d", &arr[i]);
	}
	
}
void showItem(int *arr, int *size){
	printf("Hien thi mang: \n");
	for(int i=0; i<*size; i++){
		printf("%d, ", arr[i]);
	}
}
void lengthArray(int *arr, int *size){
	int length=sizeof(arr)/sizeof(arr[0]);
	printf("Do dai cua mang la: %d\n", length);
}
void sum(int *arr, int *size){
	int sum=0;
	for(int i=0; i<*size; i++){
		sum+=arr[i];
	}	
	printf("Tong cac phan tu trong mang la: %d\n", sum);
}
void maxItem(int *arr, int *size){
	int max=0;
	for(int i=0; i<*size; i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("Phan tu lon nhat trong mang la: %d\n", max);
}

int main(){
	int arr[100];
	int choice;
	int size;
	do{
		printf("\nMENU\n");
		printf("1.Nhap so phan tu va tung phan tu\n");
		printf("2.Hien thi cac phan tu trong mang\n");
		printf("3.Tinh do dai mang\n");
		printf("4.Tinh tong cac phan tu trong mang\n");
		printf("5.Hien thi phan tu lon nhat\n");
		printf("6.Thoat\n\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				inputItem(arr, &size);
				break;
			case 2:
				showItem(arr, &size);
				break;
			case 3:
				lengthArray(arr, &size);
				break;
			case 4:
				sum(arr, &size);
				break;
			case 5:
				maxItem(arr, &size);
				break;
			case 6:
				return 0;
		default:
			printf("Gia tri nhap khong hop le!!!");
			break;
		}
		
		
	}while(choice!=6);
	return 0;
}