#if !defined(HDR)
#define HDR

int _putchar(char c);
void PrintCharacter(unsigned char ArrayOfCharacter[]);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);

enum COLUMN
{
	COLUMN_ZERO, COLUMN_ONE, COLUMN_TWO, COLUMN_THREE,
	COLUMN_FOUR, COLUMN_FIVE, NUMBER_OF_LINES = 1440
};

#endif
