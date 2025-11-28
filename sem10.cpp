//#include <fstream>       //Задание 1
//#include <iostream>
//#include <string>
//
//int main() {
//    using namespace std;
//    setlocale(LC_ALL, "RU");
//
//    ofstream createFile("input.txt");
//    if (createFile.is_open()) {
//    
//        createFile << "ggggg" << endl;
//        createFile << "dddddd" << endl;
//        createFile << "rrrrrr" << endl;
//        createFile.close();
//        cout << "Файл создан и заполнен " << endl;
//    }
//    else {
//        cerr << "Не удалось создать файл для записи" << endl;
//        return 1;
//    }
//
//    ifstream inputFile("input.txt");
//
//    if (inputFile.fail()) {
//        cerr << "Ошибка" << endl;
//        return 1;
//    }
//
//    cout << "Содержимое файла:" << endl;
//
//    string line;
//
//    while (getline(inputFile, line)) {
//        cout << line << endl;
//    }
//
//    inputFile.close();
//
//    return 0;
//}




//#include <fstream>            //Задание 2
//#include <iostream>
//#include <string>
//
//int main() {
//    using namespace std;
//    setlocale(LC_ALL, "RU");
//
//    ofstream createFile("data.txt");
//    if (createFile.is_open()) {
//        createFile << "dddd" << endl;
//        createFile << "ttttt" << endl;
//        createFile << "wwwww" << endl;
//        createFile << "sssss" << endl;
//        createFile << "hhhhhh" << endl;
//        createFile.close();
//        cout << "Файл создан и заполнен" << endl;
//    }
//    else {
//        cerr << "Не удалось создать файл для записи." << endl;
//        return 1;
//    }
//
//    ifstream dataFile("data.txt");
//
//    if (dataFile.fail()) {
//        cerr << "Ошибка" << endl;
//        return 1;
//    }
//
//    string line;
//    int lineCount = 0; 
//    while (getline(dataFile, line)) {
//        lineCount++;
//    }
//
//    cout << "Количество строк в файле: " << lineCount << endl;
//
//    dataFile.close();
//
//    return 0;
//}





//#include <fstream>             //Задание 3
//#include <iostream>
//#include <string>
//
//int main() {
//    using namespace std;
//    setlocale(LC_ALL, "RU");
//
//    ofstream createFile("text.txt");
//    if (createFile.is_open()) {
//        createFile << "fff ggg h" << endl;
//        createFile << "eee rrrr ssss" << endl;
//        createFile << "nnnn rrrr wwww" << endl;
//        createFile << "iiiii ooo rrr" << endl;
//        createFile.close();
//        cout << "Файл создан и заполнен" << endl;
//    }
//    else {
//        cerr << "Не удалось создать файл для записи" << endl;
//        return 1;
//    }
//
//
//    ifstream textFile("text.txt");
//    if (textFile.fail()) {
//        cerr << "Ошибка" << endl;
//        return 1;
//    }
//
//    string word;
//    int wordCount = 0; 
//
//    
//    while (textFile >> word) {
//        wordCount++;
//    }
//    cout << "Количество слов в файле: " << wordCount << endl;
//
//    textFile.close();
//
//    return 0;
//}




//#include <fstream>                  //Задание 4
//#include <iostream>
//#include <string>
//
//int main() {
//    using namespace std;
//    setlocale(LC_ALL, "RU");
//
//    ofstream createSource("source.txt");
//    if (createSource.is_open()) {
//        createSource << "gggggg" << endl;
//        createSource << "eeee ddd f" << endl;
//        createSource << "qqqqq" << endl;
//        createSource << "123" << endl;
//        createSource << "rrrr" << endl;
//        createSource.close();
//        cout << "Файл создан и заполнен " << endl;
//    }
//    else {
//        cerr << "Не удалось создать исходный файл" << endl;
//        return 1;
//    }
//
//  
//    ifstream sourceFile("source.txt");
//    if (sourceFile.fail()) {
//        cerr << "Ошибка" << endl;
//        return 1;
//    }
//
//    ofstream copyFile("copy.txt");
//    if (copyFile.fail()) {
//        cerr << "Ошибка" << endl;
//        sourceFile.close();
//        return 1;
//    }
//
//    string line;
//    int lineCount = 0;
//    while (getline(sourceFile, line)) {
//        copyFile << line << endl; 
//        lineCount++; 
//    }
//
//    sourceFile.close();
//    copyFile.close();
//    cout << "Файл скопирован" << endl;
//    cout << "Количество строк: " << lineCount << endl;
//
//    return 0;
//}




//#include <fstream>                 //Задание 5
//#include <iostream>
//#include <string>
//
//int main() {
//    using namespace std;
//    setlocale(LC_ALL, "RU");
//
//    ofstream createFile("input.txt");
//    if (createFile.is_open()) {
//        createFile << "dddd s" << endl;
//        createFile << "gggg763@" << endl;
//        createFile << "kkfkdk   56" << endl;
//        createFile << "9999 u" << endl;
//        createFile << "    4" << endl;
//        createFile.close();
//        cout << "Файл создан и заполнен" << endl;
//    }
//    else {
//        cerr << "Не удалось создать файл для записи." << endl;
//        return 1;
//    }
//
//    ifstream inputFile("input.txt");
//
//    if (inputFile.fail()) {
//        cerr << "Ошибка" << endl;
//        return 1;
//    }
//
//    char ch; 
//    int charCount = 0; 
//    while (inputFile.get(ch)) {
//        charCount++; 
//    }
//    cout << "Количество символов в файле: " << charCount << endl;
//
//    inputFile.close();
//
//    return 0;
//}




//#include <fstream>               //Задание 6
//#include <iostream>
//#include <string>
//
//int main() {
//    using namespace std;
//    setlocale(LC_ALL, "RU");
//
//    ofstream outputFile("output.txt");
//
//    if (outputFile.fail()) {
//        cerr << "Ошибка" << endl;
//        return 1;
//    }
//
//    string line;
//    cout << "Введите текст: " << endl;
//    getline(cin, line);
//
//    while (!line.empty()) {
//        outputFile << line << endl;
//        getline(cin, line);
//    }
//
//    outputFile.close();
//
//    cout << "Данные записаны" << endl;
//
//    return 0;
//}




//#include <fstream>                 //Задание 7
//#include <iostream>
//#include <string>
//
//int main() {
//    using namespace std;
//    setlocale(LC_ALL, "RU");
//
//    ofstream createFile("numbers.txt");
//    if (createFile.is_open()) {
//        createFile << "567 88 93 4 0 3" << endl;
//        createFile << "3 55 62 1" << endl;
//        createFile << "908 678 45" << endl;
//        createFile.close();
//        cout << "Файл создан и заполнен" << endl;
//    }
//    else {
//        cerr << "Не удалось создать файл для записи" << endl;
//        return 1;
//    }
//
//    ifstream numbersFile("numbers.txt");
//    if (numbersFile.fail()) {
//        cerr << "Ошибка" << endl;
//        return 1;
//    }
//
//    int number; 
//    int count = 0; 
//    int sum = 0; 
//    double average; 
//    while (numbersFile >> number) {
//        count++;  
//        sum += number; 
//    }
//    average = sum / count;
//    cout << "Количество чисел: " << count << endl;
//    cout << "Сумма: " << sum << endl;
//    cout << "Среднее: " << average << endl;
//
//    numbersFile.close();
//
//    return 0;
//}




//#include <fstream>                   //Задание 8
//#include <iostream>
//#include <string>
//
//int main() {
//    using namespace std;
//    setlocale(LC_ALL, "RU");
//
//    ofstream file1("file1.txt");
//    ofstream file2("file2.txt");
//
//    if (file1.is_open() && file2.is_open()) {
//        file1 << "aaaa" << endl;
//        file1 << "bbbbb" << endl;
//        file1 << "cccc" << endl;
//        file1 << "ddddd" << endl;
//
//        file2 << "aaaa" << endl;
//        file2 << "bbbbb" << endl;
//        file2 << "cccc" << endl;
//        file2 << "ddddd" << endl;
//
//        file1.close();
//        file2.close();
//        cout << "Файлы созданы" << endl;
//    }
//    else {
//        cerr << "Не удалось создать файлы" << endl;
//        return 1;
//    }
//
//    ifstream file1Read("file1.txt");
//    ifstream file2Read("file2.txt");
//
//    if (file1Read.fail() || file2Read.fail()) {
//        cerr << "Ошибка" << endl;
//        return 1;
//    }
//
//    string line1, line2;
//    bool flag = true;
//
//    while (getline(file1Read, line1) && getline(file2Read, line2)) {
//        if (line1 != line2) {
//            flag = false;
//            break; 
//        }
//    }
//    if (flag) {
//        if (getline(file1Read, line1) || getline(file2Read, line2)) {
//            flag = false;
//        }
//    }
//
//    file1Read.close();
//    file2Read.close();
//
//    if (flag) {
//        cout << "Файлы одинаковые" << endl;
//    }
//    else {
//        cout << "Файлы разные" << endl;
//    }
//
//    return 0;
//}




//#include <fstream>                 //Задание 9
//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//#include <sstream>
//
//int main() {
//    using namespace std;
//    setlocale(LC_ALL, "RU");
//
//    ofstream dataFile("temperature.txt");
//    if (dataFile.is_open()) {
//        dataFile << "Sensor1 22.5" << endl;
//        dataFile << "Sensor2 21.8" << endl;
//        dataFile << "Sensor3 23.1" << endl;
//        dataFile << "Sensor1 22.7" << endl;
//        dataFile << "Sensor2 22.0" << endl;
//        dataFile << "Sensor3 23.3" << endl;
//        dataFile << "Sensor1 22.6" << endl;
//        dataFile << "Sensor2 21.9" << endl;
//        dataFile << "Sensor3 23.2" << endl;
//        dataFile.close();
//        cout << "Файл создан" << endl;
//    }
//    else {
//        cerr << "Не удалось создать файл с данными" << endl;
//        return 1;
//    }
//
//    ifstream inputFile("temperature.txt");
//    if (inputFile.fail()) {
//        cerr << "Ошибка" << endl;
//        return 1;
//    }
//
//    map<string, vector<double>> sensorData;
//
//    string line;
//    while (getline(inputFile, line)) {
//        stringstream ss(line);
//        string sensorName;
//        double temperature;
//        ss >> sensorName >> temperature;
//        sensorData[sensorName].push_back(temperature);
//    }
//
//    inputFile.close();
//
//    ofstream reportFile("report.txt");
//    if (reportFile.fail()) {
//        cerr << "Не удалось создать файл" << endl;
//        return 1;
//    }
//
//    for (auto& sensor : sensorData) {
//        string sensorName = sensor.first;
//        vector<double>& temperatures = sensor.second;
//        double minTemp = temperatures[0];
//        double maxTemp = temperatures[0];
//        double sum = 0;
//
//        for (double temp : temperatures) {
//            if (temp < minTemp) minTemp = temp;
//            if (temp > maxTemp) maxTemp = temp;
//            sum += temp;
//        }
//
//        double avgTemp = sum / temperatures.size();
//        reportFile << sensorName << ": min = " << minTemp
//            << ", max = " << maxTemp
//            << ", avg = " << avgTemp << endl;
//    }
//
//    reportFile.close();
//
//    cout << "Отчёт о температурах сохранён" << endl;
//
//    return 0;
//}




//#include <fstream>                      //Задание 10
//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//#include <sstream>
//#include <iomanip>
//
//int main() {
//    using namespace std;
//    setlocale(LC_ALL, "RU");
//
//    ofstream logFile("power.txt");
//    if (logFile.is_open()) {
//        logFile << "2025-11-09T08:00:00 MotorA 1.25" << endl;
//        logFile << "2025-11-09T08:00:00 PumpB 0.95" << endl;
//        logFile << "2025-11-09T08:30:00 MotorA 1.40" << endl;
//        logFile << "2025-11-09T08:30:00 PumpB 0.90" << endl;
//        logFile << "2025-11-09T09:00:00 MotorA 1.35" << endl;
//        logFile << "2025-11-09T09:00:00 PumpB 0.85" << endl;
//        logFile << "2025-11-09T09:30:00 MotorA 1.30" << endl;
//        logFile.close();
//        cout << "Файл создан" << endl;
//    }
//    else {
//        cerr << "Не удалось создать файл с данными" << endl;
//        return 1;
//    }
//
//    ifstream inputFile("power.txt");
//    if (inputFile.fail()) {
//        cerr << "Ошибка" << endl;
//        return 1;
//    }
//
//    map<string, vector<double>> deviceData;
//
//    string line;
//    while (getline(inputFile, line)) {
//        stringstream ss(line); 
//        string timestamp, deviceName;
//        double power;
//        ss >> timestamp >> deviceName >> power;
//        deviceData[deviceName].push_back(power);
//    }
//
//    inputFile.close();
//
//    ofstream reportFile("energy.txt");
//    if (reportFile.fail()) {
//        cerr << "Не удалось создать файл" << endl;
//        return 1;
//    }
//
//    for (auto& device : deviceData) {
//        string deviceName = device.first;
//        vector<double>& powerReadings = device.second;
//        double totalPower = 0;
//        for (double power : powerReadings) {
//            totalPower += power;
//        }
//        double averagePower = totalPower / powerReadings.size();
//        int measurementsCount = powerReadings.size();
//        reportFile << deviceName << ": measurements = " << measurementsCount
//            << ", total = " << fixed << setprecision(2) << totalPower << " kWh"
//            << ", average = " << fixed << setprecision(2) << averagePower << " kW" << endl;
//    }
//
//    reportFile.close();
//
//    cout << "Результаты сохранены" << endl;
//
//    return 0;
//}




//#include <fstream>            //Задание 11
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//int main() {
//    using namespace std;
//    setlocale(LC_ALL, "RU");
//
//    ofstream dataFile("vibration_log.txt");
//    if (dataFile.is_open()) {
//        dataFile << "0.02" << endl;
//        dataFile << "0.05" << endl;
//        dataFile << "0.03" << endl;
//        dataFile << "0.10" << endl;
//        dataFile << "0.09" << endl;
//        dataFile << "0.07" << endl;
//        dataFile << "0.15" << endl;
//        dataFile << "0.04" << endl;
//        dataFile.close();
//        cout << "Файл создан" << endl;
//    }
//    else {
//        cerr << "Не удалось создать файл с данными" << endl;
//        return 1;
//    }
//
//    ifstream inputFile("vibration_log.txt");
//    if (inputFile.fail()) {
//        cerr << "Ошибка" << endl;
//        return 1;
//    }
//
//    vector<double> amplitudes;
//    double value;
//
//    while (inputFile >> value) {
//        amplitudes.push_back(value);
//    }
//    inputFile.close();
//
//    vector<double> filteredAmplitudes;
//    auto filterLambda = [](double amp) { return amp > 0.05; };
//    copy_if(amplitudes.begin(), amplitudes.end(), back_inserter(filteredAmplitudes), filterLambda);
//
//    double sum = 0;
//    auto sumLambda = [&sum](double amp) { sum += amp; };
//
//    for_each(amplitudes.begin(), amplitudes.end(), sumLambda);
//    double average = sum / amplitudes.size();
//
//    auto minLambda = [](double a, double b) { return a < b; };
//    auto maxLambda = [](double a, double b) { return a > b; };
//
//    double minAmplitude = *min_element(amplitudes.begin(), amplitudes.end(), minLambda);
//    double maxAmplitude = *max_element(amplitudes.begin(), amplitudes.end(), maxLambda);
//
//    ofstream reportFile("vibration_report.txt");
//    if (reportFile.fail()) {
//        cerr << "Не удалось создать файл" << endl;
//        return 1;
//    }
//
//    reportFile << "Количество измерений: " << amplitudes.size() << endl;
//
//    reportFile << "Фильтрованные значения (>0.05): ";
//    for (double amp : filteredAmplitudes) {
//        reportFile << amp << " ";
//    }
//    reportFile << endl;
//
//    reportFile << "Среднее значение: " << average << endl;
//    reportFile << "Минимум: " << minAmplitude << endl;
//    reportFile << "Максимум: " << maxAmplitude << endl;
//
//    reportFile.close();
//
//    cout << "Отчёт сохранён" << endl;
//
//    return 0;
//}