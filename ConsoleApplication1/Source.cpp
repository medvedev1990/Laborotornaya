#include<iostream>
#include<cstdio>
#include<locale.h>
using namespace std;
//////////////////////////���� ����� 1///////////////////////////////////////
void main()
{
	setlocale(LC_ALL, "rus");
	cout << "�� ��� ������" << endl;
	int a, b, c, d;
	cout << "����� �� ������ ������� ����������������?\n (1) ��� �����;\n (2) ����������;\n (3) ������������;\n (4) ���������;\n (5) �����������;\n (6) � �� ����, �������� �� ����" << endl;
	cin >> a;
	switch (a)
	{
	case 1:
	{
		cout << "������� �� Scratch, �����. Phyton" << endl;
	}
	break;
	case 2:
	{
		cout << "(1) ����� ������;\n(2) � ���� ���� ���� ��� ��������!" << endl;
		cin >> b;
		if (b == 1)
		{
			cout << "����� ���������\\�����?\n (1) � ���� �������� � ������� IT ��������;\n (2) � ������ ���� $$$;\n (3) Web;\n (4) ����.����;\n (5) ���������\n (6) 3D\\Game;" << endl;
			cin >> c;
			if (c == 1)
			{
				cout << "��� ����� ���:\n Facebook - Pryton;\n Google - Phyton;\n Windows - C#;\n Apple - C;" << endl;

			}
			else if (c == 2)
			{
				cout << "��� ����� ��� ������ Java" << endl;

			}
			else if (c == 6)
			{
				cout << "��� ����� ��� ������ ���� �++" << endl;

			}
			else if (c == 3)
			{
				cout << "(1) ������ (��, ��� �� ���������)\n (2) �������� (���-���������)" << endl;
				cin >> b;
				if (b == 2)
				{
					cout << "��� ����� ��� ������ Java Script" << endl;

				}
				else if (b == 1)
				{
					cout << "���� �������� ��...\n (1) ����������;\n (2) �������;" << endl;
					cin >> a;
					if (a == 1)
					{
						cout << "��� ������� � Microsoft?\n (1) ����� ���;\n (2) �������;\n (3) ������!!!!" << endl;
						cin >> b;
						if (b == 1)
							cout << "��� ����� ��� ������ ���� �#" << endl;
						else if (b == 2)
							cout << "��� ����� ��� ������ Java" << endl;
						else if (b == 3)
							cout << "��� ����� ��� ������ Java" << endl;
						else
							cout << "Error" << endl;
					}//����������
					else if (a == 2)
					{
						cout << "������ ����������� ��� �� �����, �� �� ����� ����������?\n (1) ��;\n (2) ���;\n (3) �� ����;\n" << endl;
						cin >> b;
						if (b == 1)
							cout << "��� ����� ��� ������ Java" << endl;
						else if ((b == 2) || (b == 3))
						{
							cout << "����� � ��� ������� �������?\n (1) Lego;\n (2) ���������;\n (3) ���������� �� ������ �����;" << endl;
							cin >> c;
							if (c == 1)
								cout << "��� ����� ��� ������ Phyton" << endl;
							else if (c == 2)
								cout << "��� ����� ��� ������ Rubi" << endl;
							else if (c == 3)
								cout << "��� ����� ��� ������ PHP" << endl;
							else
								cout << "error" << endl;
						}
					}
				}
				else
					cout << "Error" << endl;

			}
			else if (c == 4)
			{
				cout << "��� ������� � Microsoft?\n (1) ����� ���;\n (2) �������;\n (3) ������!!!!" << endl;
				cin >> b;
				if (b == 1)
					cout << "��� ����� ��� ������ ���� �#" << endl;
				else if ((b == 2) || (b == 3))
					cout << "��� ����� ��� ������ Java" << endl;
				else
					cout << "Error" << endl;
			}
			else if (c == 5)
			{
				cout << "����� ��?\n (1) IOS;\n (2) Android;\n" << endl;
				cin >> a;
				if (a == 1)
					cout << "��� ����� ��� ������ ���� �" << endl;
				else if (a == 2)
					cout << "��� ����� ��� ������ Java" << endl;
			}

		}
		else if (b == 2)
		{
			cout << "����� ���������\\�����? \n(1) 3D\\Game;\n (2) ���������;\n (3) ����.���� ;\n (4) Web;" << endl;
			cin >> a;
			if (a == 1)
			{
				cout << "��� ����� ��� ������ ���� �++" << endl;
			}
			else if (a == 2)
			{
				cout << "����� ��?\n (1) IOS;\n (2) Android;\n" << endl;
				cin >> a;
				if (a == 1)
					cout << "��� ����� ��� ������ ���� �" << endl;
				else if (a == 2)
					cout << "��� ����� ��� ������ Java" << endl;
			}
			else if (a == 3)
			{
				cout << "��� ������� � Microsoft?\n (1) ����� ���;\n (2) �������;\n (3) ������!!!!" << endl;
				cin >> b;
				if (b == 1)
					cout << "��� ����� ��� ������ ���� �#" << endl;
				else if ((b == 2) || (b == 3))
					cout << "��� ����� ��� ������ Java" << endl;
				else
					cout << "Error" << endl;
			}
			else if (a == 4)
			{
				cout << "��� ������ ����� �������� � �������� �������, ��� twitter?\n (1) ��\n (2) ��� " << endl;
				cin >> b;
				if (b == 1)
				{
					cout << "��� ����� ��� ������ Java Script" << endl;

				}
				else if (b == 2)
				{
					cout << "������ ����������� ��� �� �����, �� �� ����� ����������?\n (1) ��;\n (2) ���;\n (3) �� ����;\n" << endl;
					cin >> b;
					if (b == 1)
						cout << "��� ����� ��� ������ JavaScript" << endl;
					else if ((b == 2) || (b == 3))
					{
						cout << "����� � ��� ������� �������?\n (1) Lego;\n (2) ���������;\n (3) ���������� �� ������ �����;" << endl;
						cin >> c;
						if (c == 1)
							cout << "��� ����� ��� ������ Phyton" << endl;
						else if (c == 2)
							cout << "��� ����� ��� ������ Rubi" << endl;
						else if (c == 3)
							cout << "��� ����� ��� ������ PHP" << endl;
						else
							cout << "error" << endl;
					}
				}
			}
			else
				cout << "Error" << endl;
		}
	}
	break;
	case 6:
	{
		cout << "�������� ��� �������� Python" << endl;
	}
	break;
	case 5:
	{
	case 3:
	case 4:
		cout << "��� ���� ���� �� �������?\n (1) ��\n (2) ���. ������ ���� ������ " << endl;
		cin >> b;
		if (b == 1)
		{
			cout << "����� ���������\\�����? \n(1) 3D\\Game;\n (2) ���������;\n (3) ����.���� ;\n (4) Web;" << endl;
			cin >> a;
			if (a == 1)
			{
				cout << "��� ����� ��� ������ ���� �++" << endl;
			}
			else if (a == 2)
			{
				cout << "����� ��?\n (1) IOS;\n (2) Android;\n" << endl;
				cin >> a;
				if (a == 1)
					cout << "��� ����� ��� ������ ���� �" << endl;
				else if (a == 2)
					cout << "��� ����� ��� ������ Java" << endl;
			}
			else if (a == 3)
			{
				cout << "��� ������� � Microsoft?\n (1) ����� ���;\n (2) �������;\n (3) ������!!!!" << endl;
				cin >> b;
				if (b == 1)
					cout << "��� ����� ��� ������ ���� �#" << endl;
				else if ((b == 2) || (b == 3))
					cout << "��� ����� ��� ������ Java" << endl;
				else
					cout << "Error" << endl;
			}
			else if (a == 4)
			{
				cout << "��� ������ ����� �������� � �������� �������, ��� twitter?\n (1) ��\n (2) ��� " << endl;
				cin >> b;
				if (b == 1)
				{
					cout << "��� ����� ��� ������ Java Script" << endl;

				}
				else if (b == 2)
				{
					cout << "������ ����������� ��� �� �����, �� �� ����� ����������?\n (1) ��;\n (2) ���;\n (3) �� ����;\n" << endl;
					cin >> b;
					if (b == 1)
						cout << "��� ����� ��� ������ JavaScript" << endl;
					else if ((b == 2) || (b == 3))
					{
						cout << "����� � ��� ������� �������?\n (1) Lego;\n (2) ���������;\n (3) ���������� �� ������ �����;" << endl;
						cin >> c;
						if (c == 1)
							cout << "��� ����� ��� ������ Phyton" << endl;
						else if (c == 2)
							cout << "��� ����� ��� ������ Rubi" << endl;
						else if (c == 3)
							cout << "��� ����� ��� ������ PHP" << endl;
						else
							cout << "error" << endl;
					}
				}
			}
			else
				cout << "Error" << endl;
		}
		else if (b == 2)
		{
			cout << "��� ��������� �������. (1) ������� ��������\n (2) ������ ��������\n (3) ����������� ��������\n (4) ����� �������(�� ����� ����� �����)" << endl;
			cin >> a;
			if (a == 1)
			{
				cout << "��� ����������� ���� Phyton" << endl;
			}
			else if (a == 2)
			{
				cout << "��� ����������� ���� Phyton" << endl;
			}
			else if (a == 3)
			{
				cout << "����� �������� ������� (1) �������\n (2) ������" << endl;
				cin >> b;
				if (b == 1)
					cout << "��� ����������� ���� Java" << endl;
				else if (b == 2)
					cout << "��� ����������� ���� C" << endl;
			}
			else if (a == 4)
			{
				cout << "��� ����������� ���� C++" << endl;
			}
		}
	}
	break;
	default: cout << "��� ������ ��������" << endl;
		break;
	}
	//////////////////////////���� ����� 2///////////////////////////////////////
	{
		setlocale(LC_ALL, "rus");
		cout << "�� ��� ������" << endl;
		int a, b, c, d;
		cout << "������ ����� ���������������� ����������?\n (1) ��\n (2) ���" << endl;
		cin >> a;
		if (a == 1)
		{
			cout << "�� ������?\n(1) ��\n (2) ��� " << endl;
			cin >> b;
			if (b == 2)
			{
				cout << "������ ������?\n(1) ��\n (2) ��� " << endl;
				cin >> c;
				if (c == 1)
				{
					cout << "�������� � ������" << endl;
				}
				else if (c == 2)
				{
					cout << "������ ����������?\n (1) ��\n(2) ��� " << endl;
					cin >> a;
					if (a == 1)
					{
						cout << "����� ����?\n (1) ��\n (2) ���" << endl;
						cin >> c;
						if (c == 2)
						{
							cout << "�� ��������� ������? \n(1) ��\n (2) ���" << endl;
							cin >> d;
							if (d == 1)
								cout << "����������" << endl;
							else if (d == 2)
								cout << "������" << endl;
						}
						else if (c == 1)
						{
							cout << "������ ������ ��������\n (1) ��\n (2) ���\n (3) �� ����" << endl;
							cin >> a;
							if (a == 3)
							{
								cout << "�������" << endl;
							}
							else if (a == 2)
							{
								cout << "� ����?\n (1) ��\n (2) ���" << endl;
								cin >> d;
								if (d == 1)
									cout << "��������" << endl;
								else if (d == 2)
								{
									cout << "� ��� ���� �������� �����?\n (1) ��\n (2) ���" << endl;
									cin >> a;
									if (a == 1)
										cout << "�����" << endl;
									else if (a == 2)
										cout << "�����" << endl;

								}

							}
							else if (a == 1)
							{
								cout << "������ �������� ������� �����?\n (1) ��\n (2) ���" << endl;
								cin >> b;
								if (b == 1)
									cout << "�����" << endl;
								else if (b == 2)
								{
									cout << "������ � ����, ��� ����� �������� � �������, ���� ���� �� ����� �������?\n (1) ��\n (2) ���" << endl;
									cin >> d;
									if (d == 1)
										cout << "�������" << endl;
									else if (d == 2)
										cout << "��������" << endl;
								}

							}

						}

					}
					else if (a == 2)
					{
						cout << "������ ���������� �� 8 ����� � ����?\n (1) ��\n (2) ���" << endl;
						cin >> b;
						if (b == 1)
						{
							cout << "������ ����� �����?\n (1) ��\n (2) ���" << endl;
							cin >> c;
							if (c == 1)
								cout << "������" << endl;
							else if (c == 2)
								cout << "�������" << endl;
						}
						else if (b == 2)
						{
							cout << "���� ������? \n (1) ��\n (2) ���" << endl;
							cin >> c;
							if (c == 1)
								cout << "����" << endl;
							else if (c == 2)
								cout << "����" << endl;
						}
					}
				}
			}
			else if (b == 1)
			{
				cout << "������ ����������?\n (1) ��\n(2) ��� " << endl;
				cin >> a;
				if (a == 1)
				{
					cout << "����� ����?\n (1) ��\n (2) ���" << endl;
					cin >> c;
					if (c == 2)
					{
						cout << "�� ��������� ������? \n(1) ��\n (2) ���" << endl;
						cin >> d;
						if (d == 1)
							cout << "����������" << endl;
						else if (d == 2)
							cout << "������" << endl;
					}
					else if (c == 1)
					{
						cout << "������ ������ ��������\n (1) ��\n (2) ���\n (3) �� ����" << endl;
						cin >> a;
						if (a == 3)
						{
							cout << "�������" << endl;
						}
						else if (a == 2)
						{
							cout << "� ����?\n (1) ��\n (2) ���" << endl;
							cin >> d;
							if (d == 1)
								cout << "��������" << endl;
							else if (d == 2)
							{
								cout << "� ��� ���� �������� �����?\n (1) ��\n (2) ���" << endl;
								cin >> a;
								if (a == 1)
									cout << "�����" << endl;
								else if (a == 2)
									cout << "�����" << endl;

							}

						}
						else if (a == 1)
						{
							cout << "������ �������� ������� �����?\n (1) ��\n (2) ���" << endl;
							cin >> b;
							if (b == 1)
								cout << "�����" << endl;
							else if (b == 2)
							{
								cout << "������ � ����, ��� ����� �������� � �������, ���� ���� �� ����� �������?\n (1) ��\n (2) ���" << endl;
								cin >> d;
								if (d == 1)
									cout << "�������" << endl;
								else if (d == 2)
									cout << "��������" << endl;
							}

						}

					}

				}
				else if (a == 2)
				{
					cout << "������ ���������� �� 8 ����� � ����?\n (1) ��\n (2) ���" << endl;
					cin >> b;
					if (b == 1)
					{
						cout << "������ ����� �����?\n (1) ��\n (2) ���" << endl;
						cin >> c;
						if (c == 1)
							cout << "������" << endl;
						else if (c == 2)
							cout << "�������" << endl;
					}
					else if (b == 2)
					{
						cout << "���� ������? \n (1) ��\n (2) ���" << endl;
						cin >> c;
						if (c == 1)
							cout << "����" << endl;
						else if (c == 2)
							cout << "����" << endl;
					}
				}
			}
		}
		else if (a == 2)
		{
			cout << "������ ����������� � ���������?\n (1) ��\n (2) ���" << endl;
			cin >> b;
			if (b == 1)
			{
				cout << "������ ��������?\n (1) ��\n (2) ���" << endl;
				cin >> c;
				if (c == 1)
				{
					cout << "������ ������?\n (1) ��\n (2) ���" << endl;
					cin >> d;
					if (d == 1)
						cout << "������" << endl;
					else if (d == 2)
						cout << "����������" << endl;
				}
				else if (c == 2)
				{
					cout << "�� ������?\n (1) ��\n (2) ���" << endl;
					cin >> d;
					if (d == 1)
						cout << "������� �����" << endl;
					else if (d == 2)
						cout << "�������" << endl;
				}

			}
			else if (b == 2)
			{
				cout << "������ ����������� � �������?\n (1) ��\n (2) ���" << endl;
				cin >> c;
				if (c == 1)
				{
					cout << "�� ������?\n (1) ��\n (2) ���" << endl;
					cin >> d;
					if (d == 1)
						cout << "������� �����" << endl;
					else if (d == 2)
						cout << "�������" << endl;
				}
				else if (c == 2)
				{
					cout << "�����" << endl;
				}
			}
		}
}
}


