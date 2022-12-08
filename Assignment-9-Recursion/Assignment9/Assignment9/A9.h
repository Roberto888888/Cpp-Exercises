#include <string>
#include <vector>

using IT = std::vector<int>::iterator;
using RIT = std::vector<int>::reverse_iterator;
using SIT = std::string::iterator;

#ifndef __A9__
#define __A9__

void StoV(const std::string &, std::vector<int> &);

void assignment9_1(const std::string &);
void assignment9_2(const std::string &);
void assignment9_3(const std::string &);
void assignment9_4(const std::string &);

void reverse(std::vector<int> &);
bool palindrome(const std::vector<int> &, IT, RIT);
void fib(unsigned, std::vector<int> &);
unsigned lev(SIT, const SIT, SIT, const SIT);

#endif