#include <iostream>

using namespace std;

#define MAX_SIZE 10

class stack
{
private:
	int top;
	int arr[MAX_SIZE];

public:
	stack()
	{
		top = -1;
	}

	bool isFull()
	{
		return top == MAX_SIZE - 1;
	}

	bool isEmpty()
	{
		return top == -1;
	}

	void push(int value)
	{
		if (isFull())
		{
			cout << "Stack sudah penuh!!!" << endl;
			return;
		}
		top++;
		arr[top] = value;
	}

	void pop()
	{
		if (isEmpty())
		{
			cout << "Stack masih kosong!!!" << endl;
			return;
		}
		top--;
	}

	int peek()
	{
		if (isEmpty())
		{
			cout << "Stack masih kosong!!!" << endl;
			return -1;
		}
		return arr[top];
	}

	void display()
	{
		if (isEmpty())
		{
			cout << "Stack masih kosong!!!" << endl;
			return;
		}
		for (int i = top; i >= 0; i--)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	void clear()
	{
		top = -1;
		cout << "Stack telah dikosongkan" << endl;
	}

	void push(int value)
	{
		if (isFull())
		{
			cout << "Stack sudah penuh!!!" << endl;
			return;
		}
		else if (top == MAX_SIZE - 1)
		{
			cout << "Stack sudah mencapai batas maksimum!!!" << endl;
			return;
		}
		top++;
		arr[top] = value;
	}

	void display()
	{
		if (isEmpty())
		{
			cout << "Stack masih kosong!!!" << endl;
			return;
		}
		else
		{
			cout << "Isi stack: ";
			for (int i = top; i >= 0; i--)
			{
				cout << arr[i] << " ";
			}
			cout << endl;
		}
	}
};

int main()
{
	stack s;
	
	int choice, item;

	while (1)
	{
		cout << "\nMenu:" << endl;
		cout << "1. Tambah item ke dalam stack" << endl;
		cout << "2. Hapus item dari stack" << endl;
		cout << "3. Tampilkan item yang ada di dalam stack" << endl;
		cout << "4. Kosongkan stack" << endl;
		cout << "Pilihan: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Masukkan item: ";
			cin >> item;
			s.push(item);
			cout << "Data berhasil ditambahkan" << endl;
			break;

		case 2:
			s.pop();
			break;

		case 3:
			cout << "Isi stack: ";
			s.display();
			break;

		case 4:
			s.clear();
			break;

		case 5:
			exit(0);

		default:
			cout << "Pilihan tidak valid!" << endl;
		}
	}

	return 0;
}

