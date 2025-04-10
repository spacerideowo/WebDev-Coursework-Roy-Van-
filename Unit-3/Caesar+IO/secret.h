#ifndef SECRET_H_INCLUDED
#define SECRET_H_INCLUDED

#include <string>

std::string cleanString(std::string s);
std::string caesarEncode(std::string s, char key);
std::string caesarDecode(std::string s, char key);

#endif // SECRET_H_INCLUDED
