-----------------------------------------------------------------
Shell-интерпретатор команд для ОС Windows.			
-----------------------------------------------------------------
Программа реализует:

•	выполнение простых команд со списком аргументов;

•	выполнение списка команд, связанных “&&” или “||”;

•	выполнение команд, потоки ввода-вывода которых связаны каналами (piping);

•	перенаправление потоков ввода-вывода (stdin, stdout, stderr);

•	выполнение циклов;

•	ветвление;

•	объявление и использования псевдонимов (aliases);

•	удобное редактирование вводимой строки;

•	доступ к истории запросов.
________________________________
Сборка продукта:

Для сборки проекта необходимо, чтобы были установлены flex, утилита make и компилятор gcc, также путь к этим инструментам нахо-дился в PATH переменных среды.
Этапы сборки:
1)	Перейти в командной строке в папку ShellForWindows/src.
2) Ввести make.
3) В папке ShellForWindows появится папка bin. Перейти в нее.
4) Запустить исполняемый файл shell.exe.
__________________________________________
Удаление продукта:

Для корректного удаления продукта без потерь данных при по-следующей установке следует:
1)	Перейти в командной строке в папку ShellForWindows/src.
2)	Ввести make clean
__________________________________________
Использование продукта:

Для начала использования продукта следует ввести команду ‘help’. На экран будет выведен интерфейс работы с программой.
Для того, чтобы узнать, как использовать возможности, следует прочитать пункты 7.3 и 7.4 в файле ./doc/"Пояснительная записка"
