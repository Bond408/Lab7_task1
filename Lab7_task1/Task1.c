#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "RUS");
	char c;
	printf("������� ����� ��� �����: ");
	scanf_s("%c", &c);//���������� � �������

	switch (c)
	{
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			printf("������� �����.\n");
			break;
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z':
			printf("������� �����.\n");
			break;
		default:
			printf("����������� ������\n");
	}
	return 0;
}