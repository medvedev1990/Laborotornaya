#include<iostream>
#include<cstdio>
#include<locale.h>
using namespace std;
//////////////////////////Блок схема 1///////////////////////////////////////
void main()
{
	setlocale(LC_ALL, "rus");
	cout << "Ну что начнем" << endl;
	int a, b, c, d;
	cout << "Зачем вы хотите изучить программирование?\n (1) Для детей;\n (2) Заработать;\n (3) Саморазвитие;\n (4) Интересно;\n (5) Поразвлечся;\n (6) Я не знаю, выбирите за меня" << endl;
	cin >> a;
	switch (a)
	{
	case 1:
	{
		cout << "Начните со Scratch, затем. Phyton" << endl;
	}
	break;
	case 2:
	{
		cout << "(1) Найти работу;\n(2) У меня есть идея для стартапа!" << endl;
		cin >> b;
		if (b == 1)
		{
			cout << "Какая платформа\\сфера?\n (1) Я хочу работать в крупной IT компании;\n (2) Я просто хочу $$$;\n (3) Web;\n (4) Корп.Софт;\n (5) Мобильная\n (6) 3D\\Game;" << endl;
			cin >> c;
			if (c == 1)
			{
				cout << "Вам нужно для:\n Facebook - Pryton;\n Google - Phyton;\n Windows - C#;\n Apple - C;" << endl;

			}
			else if (c == 2)
			{
				cout << "Вам нужно для работы Java" << endl;

			}
			else if (c == 6)
			{
				cout << "Вам нужно для работы язык С++" << endl;

			}
			else if (c == 3)
			{
				cout << "(1) Бэкенд (то, что за вебсайтом)\n (2) Фронтенд (веб-интерфейс)" << endl;
				cin >> b;
				if (b == 2)
				{
					cout << "Вам нужно для работы Java Script" << endl;

				}
				else if (b == 1)
				{
					cout << "Хочу работать на...\n (1) Корпорацию;\n (2) Стартап;" << endl;
					cin >> a;
					if (a == 1)
					{
						cout << "Что скажите о Microsoft?\n (1) Люблю его;\n (2) Неплохо;\n (3) Фууууу!!!!" << endl;
						cin >> b;
						if (b == 1)
							cout << "Вам нужно для работы язык С#" << endl;
						else if (b == 2)
							cout << "Вам нужно для работы Java" << endl;
						else if (b == 3)
							cout << "Вам нужно для работы Java" << endl;
						else
							cout << "Error" << endl;
					}//корпорацию
					else if (a == 2)
					{
						cout << "Хотите попробовать что то новое, но не очень трудоемкое?\n (1) Да;\n (2) Нет;\n (3) Не знаю;\n" << endl;
						cin >> b;
						if (b == 1)
							cout << "Вам нужно для работы Java" << endl;
						else if ((b == 2) || (b == 3))
						{
							cout << "Какая у вас любимаю игрушка?\n (1) Lego;\n (2) Пластилин;\n (3) Старенький но любимы мишка;" << endl;
							cin >> c;
							if (c == 1)
								cout << "Вам нужно для работы Phyton" << endl;
							else if (c == 2)
								cout << "Вам нужно для работы Rubi" << endl;
							else if (c == 3)
								cout << "Вам нужно для работы PHP" << endl;
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
				cout << "Что скажите о Microsoft?\n (1) Люблю его;\n (2) Неплохо;\n (3) Фууууу!!!!" << endl;
				cin >> b;
				if (b == 1)
					cout << "Вам нужно для работы язык С#" << endl;
				else if ((b == 2) || (b == 3))
					cout << "Вам нужно для работы Java" << endl;
				else
					cout << "Error" << endl;
			}
			else if (c == 5)
			{
				cout << "Какая ОС?\n (1) IOS;\n (2) Android;\n" << endl;
				cin >> a;
				if (a == 1)
					cout << "Вам нужно для работы язык С" << endl;
				else if (a == 2)
					cout << "Вам нужно для работы Java" << endl;
			}

		}
		else if (b == 2)
		{
			cout << "какая платформа\\сфера? \n(1) 3D\\Game;\n (2) Мобильная;\n (3) Корп.Софт ;\n (4) Web;" << endl;
			cin >> a;
			if (a == 1)
			{
				cout << "Вам нужно для работы язык С++" << endl;
			}
			else if (a == 2)
			{
				cout << "Какая ОС?\n (1) IOS;\n (2) Android;\n" << endl;
				cin >> a;
				if (a == 1)
					cout << "Вам нужно для работы язык С" << endl;
				else if (a == 2)
					cout << "Вам нужно для работы Java" << endl;
			}
			else if (a == 3)
			{
				cout << "Что скажите о Microsoft?\n (1) Люблю его;\n (2) Неплохо;\n (3) Фууууу!!!!" << endl;
				cin >> b;
				if (b == 1)
					cout << "Вам нужно для работы язык С#" << endl;
				else if ((b == 2) || (b == 3))
					cout << "Вам нужно для работы Java" << endl;
				else
					cout << "Error" << endl;
			}
			else if (a == 4)
			{
				cout << "Ваш сервис будет работать в реальном времени, как twitter?\n (1) Да\n (2) Нет " << endl;
				cin >> b;
				if (b == 1)
				{
					cout << "Вам нужно для работы Java Script" << endl;

				}
				else if (b == 2)
				{
					cout << "Хотите попробовать что то новое, но не очень трудоемкое?\n (1) Да;\n (2) Нет;\n (3) Не знаю;\n" << endl;
					cin >> b;
					if (b == 1)
						cout << "Вам нужно для работы JavaScript" << endl;
					else if ((b == 2) || (b == 3))
					{
						cout << "Какая у вас любимаю игрушка?\n (1) Lego;\n (2) Пластилин;\n (3) Старенький но любимы мишка;" << endl;
						cin >> c;
						if (c == 1)
							cout << "Вам нужно для работы Phyton" << endl;
						else if (c == 2)
							cout << "Вам нужно для работы Rubi" << endl;
						else if (c == 3)
							cout << "Вам нужно для работы PHP" << endl;
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
		cout << "Выберите для изученим Python" << endl;
	}
	break;
	case 5:
	{
	case 3:
	case 4:
		cout << "Уже есть идея на миллион?\n (1) Да\n (2) Нет. Просто хочу начать " << endl;
		cin >> b;
		if (b == 1)
		{
			cout << "какая платформа\\сфера? \n(1) 3D\\Game;\n (2) Мобильная;\n (3) Корп.Софт ;\n (4) Web;" << endl;
			cin >> a;
			if (a == 1)
			{
				cout << "Вам нужно для работы язык С++" << endl;
			}
			else if (a == 2)
			{
				cout << "Какая ОС?\n (1) IOS;\n (2) Android;\n" << endl;
				cin >> a;
				if (a == 1)
					cout << "Вам нужно для работы язык С" << endl;
				else if (a == 2)
					cout << "Вам нужно для работы Java" << endl;
			}
			else if (a == 3)
			{
				cout << "Что скажите о Microsoft?\n (1) Люблю его;\n (2) Неплохо;\n (3) Фууууу!!!!" << endl;
				cin >> b;
				if (b == 1)
					cout << "Вам нужно для работы язык С#" << endl;
				else if ((b == 2) || (b == 3))
					cout << "Вам нужно для работы Java" << endl;
				else
					cout << "Error" << endl;
			}
			else if (a == 4)
			{
				cout << "Ваш сервис будет работать в реальном времени, как twitter?\n (1) Да\n (2) Нет " << endl;
				cin >> b;
				if (b == 1)
				{
					cout << "Вам нужно для работы Java Script" << endl;

				}
				else if (b == 2)
				{
					cout << "Хотите попробовать что то новое, но не очень трудоемкое?\n (1) Да;\n (2) Нет;\n (3) Не знаю;\n" << endl;
					cin >> b;
					if (b == 1)
						cout << "Вам нужно для работы JavaScript" << endl;
					else if ((b == 2) || (b == 3))
					{
						cout << "Какая у вас любимаю игрушка?\n (1) Lego;\n (2) Пластилин;\n (3) Старенький но любимы мишка;" << endl;
						cin >> c;
						if (c == 1)
							cout << "Вам нужно для работы Phyton" << endl;
						else if (c == 2)
							cout << "Вам нужно для работы Rubi" << endl;
						else if (c == 3)
							cout << "Вам нужно для работы PHP" << endl;
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
			cout << "Мне нравиться учиться. (1) Простым способом\n (2) Лучшим способом\n (3) Трудненьким способом\n (4) Очень сложный(Но потом будет легче)" << endl;
			cin >> a;
			if (a == 1)
			{
				cout << "Вам рекомендуем язык Phyton" << endl;
			}
			else if (a == 2)
			{
				cout << "Вам рекомендуем язык Phyton" << endl;
			}
			else if (a == 3)
			{
				cout << "Какая корорбка передач (1) Автомат\n (2) Ручная" << endl;
				cin >> b;
				if (b == 1)
					cout << "Вам рекомендуем язык Java" << endl;
				else if (b == 2)
					cout << "Вам рекомендуем язык C" << endl;
			}
			else if (a == 4)
			{
				cout << "Вам рекомендуем язык C++" << endl;
			}
		}
	}
	break;
	default: cout << "нет такого варианта" << endl;
		break;
	}
	//////////////////////////Блок схема 2///////////////////////////////////////
	{
		setlocale(LC_ALL, "rus");
		cout << "Ну что начнем" << endl;
		int a, b, c, d;
		cout << "Хотите стать профессилнальным музыкантом?\n (1) Да\n (2) Нет" << endl;
		cin >> a;
		if (a == 1)
		{
			cout << "Вы богаты?\n(1) Да\n (2) Нет " << endl;
			cin >> b;
			if (b == 2)
			{
				cout << "Любите деньги?\n(1) Да\n (2) Нет " << endl;
				cin >> c;
				if (c == 1)
				{
					cout << "Забудьте о Музыке" << endl;
				}
				else if (c == 2)
				{
					cout << "Любите оторваться?\n (1) Да\n(2) Нет " << endl;
					cin >> a;
					if (a == 1)
					{
						cout << "Пьете пиво?\n (1) Да\n (2) Нет" << endl;
						cin >> c;
						if (c == 2)
						{
							cout << "Вы страстная натура? \n(1) Да\n (2) Нет" << endl;
							cin >> d;
							if (d == 1)
								cout << "Виолончель" << endl;
							else if (d == 2)
								cout << "Домбра" << endl;
						}
						else if (c == 1)
						{
							cout << "Хотите играть классику\n (1) Да\n (2) Нет\n (3) Не знаю" << endl;
							cin >> a;
							if (a == 3)
							{
								cout << "Тромбон" << endl;
							}
							else if (a == 2)
							{
								cout << "а джаз?\n (1) Да\n (2) Нет" << endl;
								cin >> d;
								if (d == 1)
									cout << "Саксофон" << endl;
								else if (d == 2)
								{
									cout << "У Вас есть немецкое корни?\n (1) Да\n (2) Нет" << endl;
									cin >> a;
									if (a == 1)
										cout << "Труба" << endl;
									else if (a == 2)
										cout << "Дудук" << endl;

								}

							}
							else if (a == 1)
							{
								cout << "Готовы работать круглые сутки?\n (1) Да\n (2) Нет" << endl;
								cin >> b;
								if (b == 1)
									cout << "Гобой" << endl;
								else if (b == 2)
								{
									cout << "Готовы к тому, что будут проблемы с работой, даже если вы круто играете?\n (1) Да\n (2) Нет" << endl;
									cin >> d;
									if (d == 1)
										cout << "Кларнет" << endl;
									else if (d == 2)
										cout << "Валторна" << endl;
								}

							}

						}

					}
					else if (a == 2)
					{
						cout << "Готовы заниматься по 8 часов в день?\n (1) Да\n (2) Нет" << endl;
						cin >> b;
						if (b == 1)
						{
							cout << "Хотите учить детей?\n (1) Да\n (2) Нет" << endl;
							cin >> c;
							if (c == 1)
								cout << "Флейта" << endl;
							else if (c == 2)
								cout << "Скрипка" << endl;
						}
						else if (b == 2)
						{
							cout << "Ноты знаете? \n (1) Да\n (2) Нет" << endl;
							cin >> c;
							if (c == 1)
								cout << "Арфа" << endl;
							else if (c == 2)
								cout << "Альт" << endl;
						}
					}
				}
			}
			else if (b == 1)
			{
				cout << "Любите оторваться?\n (1) Да\n(2) Нет " << endl;
				cin >> a;
				if (a == 1)
				{
					cout << "Пьете пиво?\n (1) Да\n (2) Нет" << endl;
					cin >> c;
					if (c == 2)
					{
						cout << "Вы страстная натура? \n(1) Да\n (2) Нет" << endl;
						cin >> d;
						if (d == 1)
							cout << "Виолончель" << endl;
						else if (d == 2)
							cout << "Домбра" << endl;
					}
					else if (c == 1)
					{
						cout << "Хотите играть классику\n (1) Да\n (2) Нет\n (3) Не знаю" << endl;
						cin >> a;
						if (a == 3)
						{
							cout << "Тромбон" << endl;
						}
						else if (a == 2)
						{
							cout << "а джаз?\n (1) Да\n (2) Нет" << endl;
							cin >> d;
							if (d == 1)
								cout << "Саксофон" << endl;
							else if (d == 2)
							{
								cout << "У Вас есть немецкое корни?\n (1) Да\n (2) Нет" << endl;
								cin >> a;
								if (a == 1)
									cout << "Труба" << endl;
								else if (a == 2)
									cout << "Дудук" << endl;

							}

						}
						else if (a == 1)
						{
							cout << "Готовы работать круглые сутки?\n (1) Да\n (2) Нет" << endl;
							cin >> b;
							if (b == 1)
								cout << "Гобой" << endl;
							else if (b == 2)
							{
								cout << "Готовы к тому, что будут проблемы с работой, даже если вы круто играете?\n (1) Да\n (2) Нет" << endl;
								cin >> d;
								if (d == 1)
									cout << "Кларнет" << endl;
								else if (d == 2)
									cout << "Валторна" << endl;
							}

						}

					}

				}
				else if (a == 2)
				{
					cout << "Готовы заниматься по 8 часов в день?\n (1) Да\n (2) Нет" << endl;
					cin >> b;
					if (b == 1)
					{
						cout << "Хотите учить детей?\n (1) Да\n (2) Нет" << endl;
						cin >> c;
						if (c == 1)
							cout << "Флейта" << endl;
						else if (c == 2)
							cout << "Скрипка" << endl;
					}
					else if (b == 2)
					{
						cout << "Ноты знаете? \n (1) Да\n (2) Нет" << endl;
						cin >> c;
						if (c == 1)
							cout << "Арфа" << endl;
						else if (c == 2)
							cout << "Альт" << endl;
					}
				}
			}
		}
		else if (a == 2)
		{
			cout << "Хотите встречаться с девушками?\n (1) Да\n (2) Нет" << endl;
			cin >> b;
			if (b == 1)
			{
				cout << "Любите глупышек?\n (1) Да\n (2) Нет" << endl;
				cin >> c;
				if (c == 1)
				{
					cout << "Любите выпить?\n (1) Да\n (2) Нет" << endl;
					cin >> d;
					if (d == 1)
						cout << "Гитара" << endl;
					else if (d == 2)
						cout << "Фортепиано" << endl;
				}
				else if (c == 2)
				{
					cout << "Вы парень?\n (1) Да\n (2) Нет" << endl;
					cin >> d;
					if (d == 1)
						cout << "оперный певец" << endl;
					else if (d == 2)
						cout << "Ударные" << endl;
				}

			}
			else if (b == 2)
			{
				cout << "Хотите встречаться с парнями?\n (1) Да\n (2) Нет" << endl;
				cin >> c;
				if (c == 1)
				{
					cout << "Вы парень?\n (1) Да\n (2) Нет" << endl;
					cin >> d;
					if (d == 1)
						cout << "оперный певец" << endl;
					else if (d == 2)
						cout << "Ударные" << endl;
				}
				else if (c == 2)
				{
					cout << "Фагот" << endl;
				}
			}
		}
}
}


