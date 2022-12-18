#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct sProduct
{
	char name[100];
	int price;
	int quantityInStok;
}product;


int numOfNewProduct()
{
	printf("Скільки нових продуктів бажаєте ввести?: ");
	int temp = 0;
	scanf("%d", &temp);

	return temp;
}


void fillingInfoAboutProduct(product* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("\nВведіть назву товару(ліміт 40 символів!):");
		scanf("%s", arr[i].name);

		printf("Введіть ціну товару: ");
		scanf("%d", &arr[i].price);

		printf("Введіть кількість товару: ");
		scanf("%d", &arr[i].quantityInStok);
	}
}


void outInfoAboutProduct(product* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("\nНазва %d товару: ", (i + 1));
		printf_s(arr[i].name, 40);

		printf("\nКількість %d товару: %d", (i + 1), arr[i].quantityInStok);

		printf("\nЦіна %d товару: %d", (i + 1), arr[i].price);
		printf("\n");
	}
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
	int numOfProduct = numOfNewProduct();

	product* allProduct;
	allProduct = malloc(sizeof(*allProduct) * numOfProduct);

	fillingInfoAboutProduct(allProduct, numOfProduct);

	outInfoAboutProduct(allProduct, numOfProduct);
}

