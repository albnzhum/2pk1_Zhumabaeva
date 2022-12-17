﻿#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FirstTask 
{
private:
    enum Marks {
    very_bad = 1,
    bad = 2,
    satisfactory = 3,
    good = 4,
    excellent = 5
};
public:
    void MarksMain() 
    {
        cout << "Введите оценку по пятибалльной шкале: ";
        int mark;
        cin >> mark;
        Marks marks = static_cast<Marks>(mark);
        CheckMark(marks);
    }
    void CheckMark(Marks charasteristic)
    {
        switch (charasteristic)
        {
        case 1:
            cout << "Характеристика: очень плохо" << endl;
            break;
        case 2:
            cout << "Характеристика: плохо" << endl;
            break;
        case 3:
            cout << "Характеристика: удовлетворительно" << endl;
            break;
        case 4:
            cout << "Характеристика: хорошо" << endl;
            break;
        case 5:
            cout << "Характеристика: отлично" << endl;
            break;
        default: cout << "Выберите оценку от 1 до 5" << endl; break;

        }
    };

};

class SecondTask 
{
private:
    string line;
    string season;
    int seasonNumber;

    enum Seasons
    {
        winter = 1,
        spring = 2,
        summer = 3,
        autumn = 4
    };

public:
    void WinterHolidays() 
    {
        cout << "День Героев Отечества — 9 декабря\nДень Конституции Российской Федерации  — 12 декабря\nРождество Христово у западных христиан — 25 декабря\nСтарый Новый год — 14 января\nКрещение Господне — 19 января\nДень Республики Крым — 20 января\nДень студента | Татьянин день — 25 января\nДень полного освобождения Ленинграда от фашистской блокады — 27 января\nДень святого Валентина  День всех влюбленных — 14 февраля";
    }

    void SpringHolidays()
    {
        cout << "Масленица — 28.02.-06.03. (в 2022 году)\nДень воссоединения Крыма с Россией (выходной день в Республике Крым) — 18 марта\nДень моряка-подводника — 19 марта\nВсемирный день поэзии — 21 марта\nДень Балтийского моря — 22 марта\nЧас Земли (экологическая акция) — 26 марта (в 2022 году)\nДень смеха (День дурака) — 1 апреля\nБлаговещение — 7 апреля\nВсемирный день космонавтики и авиации (Памятная дата России) — 12 апреля\nВербное воскресенье — 17 апреля (в 2022 году)\nДень победы русских воинов князя Александра Невского над немецкими рыцарями на Чудском озере (Ледовое побоище) (День воинской славы России) — 18 апреля\nДень принятия Крыма, Тамани и Кубани в состав Российской империи (Памятная дата России) — 19 апреля\nНациональный день донора в России — 20 апреля\nПасха — 24 апреля (в 2022 году)\nДень участников ликвидации последствий радиационных аварий и катастроф и памяти жертв этих аварий и катастроф (Памятная дата России) — 26 апреля\nДень российского парламентаризма (Памятная дата России) — 27 апреля\nДень радио — 7 мая\nДень славянской письменности и культуры — 24 мая\nДень пограничника — 28 мая";
    }

    void SummerHolidays()
    {
        cout << "\nМеждународный день защиты детей — 01 июня\nПушкинский день | День русского языка — 06 июня\nТроица | День Святой Троицы — 12 июня (в 2022 году)\nДень медицинского работника — 19 июня (в 2022 году)\nДень памяти и скорби | День начала Великой Отечественной войны (Памятная дата России) — 22 июня\nДень молодежи России — 27 июня\nДень партизан и подпольщиков (Памятная дата России) — 29 июня\nДень ветеранов боевых действий — 1 июля\nДень ГИБДД МВД России — 3 июля\nИван Купала — 7 июля\nВсероссийский день семьи, любви и верности — 8 июля\nКурбан Байрам — 9 июля (в 2022 году)\nДень победы русской армии над шведами в Полтавском сражении (День воинской славы России) — 10 июля\nДень Крещения Руси (Памятная дата России) — 28 июля\nДень Военно-Морского Флота России — 31 июля (в 2022 году)\nДень памяти российских воинов, погибших в Первой мировой войне (Памятная дата России) — 1 августа\n\nДень железнодорожника — 7 августа (в 2022 году)\nДень Воздушно-десантных войск России — 2 августа\nДень строителя — 14 августа (в 2022 году)\nДень победы русского флота под командованием Петра Первого над шведами у мыса Гангут (День воинской славы России) — 9 августа\nДень Военно-воздушных сил России — 12 августа\nМеждународный день молодежи — 12 августа\nПреображение Господне — 19 августа\nДень Воздушного Флота России — 21 августа (в 2022 году)\nДень офицера России — 21 августа\nДень Государственного флага Российской Федерации — 22 августа\nДень разгрома советскими войсками немецко-фашистских войск в Курской битве (День воинской славы России) — 23 августа\nУспение Пресвятой Богородицы — 28 августа\nДень шахтера — 29 августа";
    }

    void AutumnHolidays()
    {
        cout << "\nДень знаний —  1 сентября\nДень российской гвардии — 2 сентября\nДень окончания Второй мировой войны — 3 сентября\nДень нефтяника — 4 сентября (в 2022 году)\nДень Бородинского сражения (День воинской славы России) — 6 сентября\nДень танкиста в России — 11 сентября (в 2022 году)\nДень победы русской эскадры над турецкой эскадрой у мыса Тендра (День воинской славы России) — 11 сентября\nУсекновения главы Пророка, Предтечи и Крестителя Господня Иоанна — 11 сентября\nДень победы русских полков в Куликовской битве (День воинской славы России) — 21 сентября\nРождество Пресвятой Богородицы — 21 сентября\nДень машиностроителя — 25 сентября (в 2022 году)\nВоздвижение Честного Креста Господня — 27 сентября\nДень ОМОН в России — 3 октября\nДень Космических войск России — 4 октября\nВсемирный день учителя — 5 октября\nДень разгрома советскими войсками немецко-фашистских войск в битве за Кавказ (День воинской славы России) — 9 октября\nПокров Пресвятой Богородицы — 14 октября\nДень военного связиста в России — 20 октября\nДень автомобилиста — 30 октября (в 2022 году)\nХэллоуин — 31 октября\nДень проведения военного парада на Красной площади в 1941 году — (День воинской славы России) 7 ноября\nДень сотрудника органов внутренних дел Российской Федерации — 10 ноября\nДень ракетных войск и артиллерии в России — 19 ноября\nДень бухгалтера в России — 21 ноября\nДень морской пехоты России — 27 ноября\nДень матери в России — 27 ноября (в 2022 году)";

    }
    
    void SeasonsMain() 
    {
        cout << "Введите время года (на английском): ";
        cin >> season;
        cout << "Праздники в данный промежуток:" << endl;
        SeasonCheck();

    }

    void SeasonCheck()
    {
        if (season == "spring")
        {
            seasonNumber = spring;
            Seasons season = static_cast<Seasons>(seasonNumber);
            SeasonChange(season);
        }
        else if (season == "autumn")
        {
            seasonNumber = (int)autumn;
            Seasons season = static_cast<Seasons>(seasonNumber);
            SeasonChange(season);
        }
        else if (season == "summer")
        {
            seasonNumber = summer;
            Seasons season = static_cast<Seasons>(seasonNumber);
            SeasonChange(season);
        }
        else if (season == "winter")
        {
            seasonNumber = winter;
            Seasons season = static_cast<Seasons>(seasonNumber);
            SeasonChange(season);
        }
        else
        {
            cout << "Введено неверное время года";
        }
    }

    void SeasonChange(Seasons season)
    {
        switch (season)
        {
        case 1:
            WinterHolidays();
            break;

        case 2:
            SpringHolidays();
            break;
        case 3:
            SummerHolidays();
            break;
        case 4:
            AutumnHolidays();
            break;
        default:
            cout << "Неверно";
            break;

        }
    }
};

int main()
{
    setlocale(LC_ALL, "");
    cout << "Первое задание" << endl << "-------------------" << endl;
    FirstTask firsttask;
    firsttask.MarksMain();
    cout << endl;
    cout << "Второе задание" << endl << "-------------------" << endl;
    SecondTask secondtask;
    secondtask.SeasonsMain();
    

}