#pragma once
#include <vector>
template <typename T>
using Participant = std::vector<T>(*)(std::vector<T>);

std::vector<int> std_sort(std::vector<int>);
std::vector<double> sort_for_integers_only(std::vector<double> data);


//place your method name here
//--------------------Team Ahmatzyanov---------------------------
std::vector<int> binaryheap_by_Salikhova(std::vector<int> data);
std::vector<double> binaryheap_by_Salikhova(std::vector<double> data);
std::vector<int> tim_sort_by_Taishev(std::vector<int> data);
std::vector<double> tim_sort_by_Taishev(std::vector<double> data);
std::vector<int> quickSort_by_Ahmatzyanov(std::vector<int> data);
std::vector<double> quickSort_by_Ahmatzyanov(std::vector<double> data);
std::vector<int> merge_sort_by_Burlin(std::vector<int> data);
std::vector<double> merge_sort_by_Burlin(std::vector<double> data);
std::vector <int> combSort_by_Ismailova(std::vector<int> data);
//---------------------------------------------------------------
//place your method name here
//--------------------Team Kononenko---------------------------
std::vector <int> CombSortByKononenko(std::vector<int> data);
std::vector <double> CombSortByKononenko(std::vector<double> data);
std::vector <int> ShellSort_by_Skriplyuk(std::vector<int> data);
std::vector <double> ShellSort_by_Skriplyuk(std::vector<double> data);
std::vector <int> mergeSortByMalakhov(std::vector<int> arr);
std::vector <double> mergeSortByMalakhov(std::vector<double> arr);
std::vector <int> quickSortbyMaltsev(std::vector<int> arr);
std::vector <double> quickSortbyMaltsev(std::vector<double> arr);

