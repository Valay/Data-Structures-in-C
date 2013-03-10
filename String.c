#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>


int isUniqueChars(char *s);
char *reverse_string(char *s);
void reverse_str(char *str);
char* remove_duplicate(char *str);
void print_all_characters();
int anagrams(char* s1, char*s2);
char* replace_space(char *s);
void rotate_image(void);
void make_zeros();
int is_rotation(char* str1, char* str2);
int is_substring(char *str1, char *str2);


int main(int argc, char *argv[])
{
	int value=0;

	// ---------> Assume you have a method isSubstring which checks if one word is a substring of another. Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using only one call to isSubstring (i.e., “waterbottle” is a rotation of “erbottlewat”).
	value = is_rotation(argv[1],argv[2]);	
	if(value)
		printf("True");
	else
		printf("False");


	//----------> Write an algorithm such that if an element in an MxN matrix is 0, its entire row and column is set to 0.
	//make_zeros();

	//----------->  Given an image represented by an NxN matrix, where each pixel in the image is 4 bytes, write a method to rotate the image by 90 degrees. Can you do this in place?
	//rotate_image();


	//-------> Write a method to replace all spaces in a string with ‘%20’.
	//printf("%s",replace_space("Valay Shah  hefasdf jasfas  lkjadfkl   dsfasdkjflk lkjfds"));

	//-------> Decide if two Strings are anagrams or not
	// Ans-> Sort two strings (as you sort numbers) and compare or given below
	/*
	value = anagrams(argv[1],argv[2]);
	if(value)
		printf("True");
	else
		printf("False");
	*/

	//--------> Print all characters
	//print_all_characters();


	//--------> Remove Duplicate characters from a given string
	/*
	printf("%s",remove_duplicate(argv[1]));
	*/	
	
	//--------> String Reverse 1	
	/*	
	printf("%s",reverse_string(argv[1]));
	*/

	//--------> String Reverse 2
	/*
	reverse_str(argv[1]);
	printf("%s",argv[1]);
	*/

	//--------> Determine if string has unique characters
	/*
	value = isUniqueChars(argv[1]);
	if(value)
		printf("True");
	else
		printf("False");
	*/
	
	printf("\n");
	return 0;
}


int is_rotation(char *str1, char *str2)
{
	int length;
	length = strlen(str1);
	

	char *str_double = (char*) malloc(2*length);

	strcpy(str_double,str1);
	strcat(str_double,str1);
	printf("%s %s %s",str1,str2,str_double);
	return (is_substring(str_double,str2));
}

int is_substring(char *str1, char *str2)
{
	// Using Knuth Morris Pratt
	
	
	free(str1);
	return 0;
}

void make_zeros()
{
	int array[4][5] = { {1,0,3,4,1},{5,6,7,8,3},{9,10,11,0,2},{13,14,15,16,1}};
	int i=0,j=0;	
	int count_col=0, count_row=0;
	int row[4]={0},col[5]={0};
	int temp;

	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d  ",array[i][j]);	
		}
		printf("\n");
	}
	printf("\n");

	for(i=0;i<4;i++)
		printf("%d",row[i]);
	printf("\n");
	for(i=0;i<5;i++)
		printf("%d",col[i]);
	printf("\n");

	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			if(array[i][j] == 0)
			{
				if(row[i] == 0)
					row[i]=1;
				if(col[j] == 0)
					col[j]=1;
			}
		}
	}

	for(i=0;i<4;i++)
		printf("%d",row[i]);
	printf("\n");
	for(i=0;i<5;i++)
		printf("%d",col[i]);
	printf("\n");

	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			if( row[i] == 1 || col[j] == 1)
			{
				array[i][j] = 0;
			}
		}
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d  ",array[i][j]);	
		}
		printf("\n");
	}
	printf("\n");
	
}

void rotate_image()
{
	int array[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int i=0,j=0;	
	int temp;

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d  ",array[i][j]);	
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<i+1;j++)
		{
			temp = array[j][i];
			array[j][i] = array[i][j];
			array[i][j] = temp;
		}
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d  ",array[i][j]);	
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			temp = array[i][j];
			array[i][j] = array[i][3-j];
			array[i][3-j] = temp;
		}
	}

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d  ",array[i][j]);	
		}
		printf("\n");
	}
}

char* replace_space(char *s)
{
	int length;
	int iter=0;
	int num_of_spaces=0;
	int new_str_size=0;
	int count=0;	

	length = strlen(s);	
	
	while(iter < length)
	{
		if(s[iter] == ' ')
			num_of_spaces++;
		iter++;
	}

	if(num_of_spaces == 0)
	{
		return s;
	}

	new_str_size = length + 2*num_of_spaces;
	char *new_str = (char *) malloc (new_str_size);	
	
	iter=0;
	count=0;
	while(iter<length)
	{
		if(s[iter] == ' ')
		{
			new_str[count++] = '%';
			new_str[count++] = '2';
			new_str[count++] = '0'; 
		}
		else
			new_str[count++] = s[iter];
		iter++;
	}
	new_str[count] = '\0';
	return new_str;
}


int anagrams(char* str1, char* str2)
{
	int iter=0;
	int unique1[256]={0};
	int unique2[256]={0};
	int length1,length2;
	int asc;	

	length1 = strlen(str1);
	length2 = strlen(str2);

	while(iter<length1)
	{
		asc = str1[iter];
  		unique1[asc]++;	
		iter++;
	}
	
	iter = 0;
	while(iter<length2)
	{
		asc = str2[iter];
  		unique2[asc]++;	
		iter++;
	}		

	for(iter=0;iter<256;iter++)
	{
		if(unique1[iter] != unique2[iter])
		{
			return 0;
		}
	}
	return 1;
}

void print_all_characters()
{
	int i;
	for(i=0;i<256;i++)
	{
		printf("%d --> %c\n",i,(char)i);
	}
}

char* remove_duplicate(char *str)
{
	int iter=0;
	int tail=0;
	int asc;
	int length=0;
	int unique[256]={0};

	length = strlen(str);

	if(length<2)
		return str;
	
	while(iter<length)	
	{
		asc = str[iter];
		if(!unique[asc])
		{
			unique[asc]++;
			str[tail] = str[iter];
			tail++;
		}
		iter++;
	}
	str[tail]= '\0';
	return str;
}


void reverse_str(char *str)
{
	char *rev = str;
	char temp;
	
	if(str)
	{	
		while(*rev)
		{
			rev++;
		}
		rev--;
		while(str < rev)
		{
			temp = *str;
			*str = *rev;
			*rev = temp;
			str++;
			rev--;
		}
	}
}
	

char* reverse_string(char *s)
{
	int length;
        int half;
	int iter=0;
	char temp;

	length = strlen(s);
	half = floor(length/2);
	
	while(iter < half)
	{
		temp = s[iter];	
		s[iter] = s[length-iter-1];
		s[length-iter-1] = temp;
		iter++;
	}
	return s;
}

int isUniqueChars(char *s)
{
	int iter=0;
 	int length;
	int asc;
	int unique[256]={0};
 	
	length = strlen(s);

	printf("%d",length);
	while(iter<length)
	{
		asc = s[iter];
  				
		if(unique[asc])
		{
			return 0;
		}
		else
		{
			unique[asc] = 1;
		}	
		iter++;
	}
	return 1;
}
