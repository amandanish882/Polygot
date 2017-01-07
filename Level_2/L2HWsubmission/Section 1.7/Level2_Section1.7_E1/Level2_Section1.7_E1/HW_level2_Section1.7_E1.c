//Author Tjisana Kerr - Level 2 Section 1.7 Exercise 1
//Source code
//Creation and use of swap function that must exchange the value of two variables

void swap(int*,int*); // function declaration of swap

int main()
{
	int a = 2, b = 4;
	printf("Before swap\n");
	printf("A = %d\nB = %d\n", a, b); //console output of variables before swap function has been executed
	swap(&a, &b);
	printf("After swap\n");
	printf("A = %d\nB = %d\n", a, b); //console output of variables after swap function has been executed
	return 0;
}

void swap(int* var1, int* var2)
{
	int temp;// temporary variable used to hold value of var1
	temp = (*var1);
	(*var1) = (*var2);
	(*var2) = temp;
}