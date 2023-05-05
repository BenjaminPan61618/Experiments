#include <iostream>
#include <cstring>
using namespace std;

class String {
  public:
  	friend int maxsubstringLength(String str1, String str2);
    String() {
        len = 0;
        s = new char[len + 1];
        strcpy(s, "");
    }
    String(char str[]) {
        len = strlen(str);
        s = new char[len + 1];
        strcpy(s, str);
    }
    void getstring() {
        char str[100];
        cout << "输入字符串: ";
        cin.getline(str, 100);
        len = strlen(str);
        s = new char[len + 1];
        strcpy(s, str);
    }
    void display() {
        cout << s << endl;
    }
    friend String maxsubstring(String str1, String str2) {
        int len1 = str1.len;
        int len2 = str2.len;
        int maxlen = 0;
        int end = 0;
        int **table = new int*[len1 + 1];
        for (int i = 0; i <= len1; i++) {
            table[i] = new int[len2 + 1];
            for (int j = 0; j <= len2; j++) {
                table[i][j] = 0;
            }
        }
        for (int i = 1; i <= len1; i++) {
            for (int j = 1; j <= len2; j++) {
                if (str1.s[i - 1] == str2.s[j - 1]) {
                    table[i][j] = table[i - 1][j - 1] + 1;
                    if (table[i][j] > maxlen) {
                        maxlen = table[i][j];
                        end = i - 1;
                    }
                }
            }
        }
        for (int i = 0; i <= len1; i++) {
            delete[] table[i];
        }
        delete[] table;
        char result[maxlen + 1];
        strncpy(result, str1.s + end - maxlen + 1, maxlen);
        result[maxlen] = '\0';
        String maxsubstr(result);
        return maxsubstr;
    }
    int getlen()
        {return len;}
   
  private:
    int len;
    char *s;
};



 int maxsubstringLength(String str1, String str2) {
    int len1 = str1.len;
    int len2 = str2.len;
    int maxlen = 0;
    int **table = new int*[len1 + 1];
    for (int i = 0; i <= len1; i++) {
        table[i] = new int[len2 + 1];
        for (int j = 0; j <= len2; j++) {
            table[i][j] = 0;
        }
    }
    for (int i = 1; i <= len1; i++) {
        for (int j = 1; j <= len2; j++) {
            if (str1.s[i - 1] == str2.s[j - 1]) {
                table[i][j] = table[i - 1][j - 1] + 1;
                if (table[i][j] > maxlen) {
                    maxlen = table[i][j];
                }
            }
        }
    }
    for (int i = 0; i <= len1; i++) {
        delete[] table[i];
    }
    delete[] table;
    return maxlen;
}

int main() {
	system("chcp 65001");
    String str1manip, str2manip;
    int str1len,str2len,strcomlen;
    str1manip.getstring();
    str2manip.getstring();
    cout << " s1字符串= ";
    str1manip.display();
    str1len=str1manip.getlen();
    cout<<"(长度为"<<str1len<<")"<<endl;
    cout << " s2字符串= ";
    str2manip.display();
        str2len=str2manip.getlen();
    cout<<"(长度为"<<str2len<<")"<<endl;
    String maxsubstr = maxsubstring(str1manip, str2manip);
    cout << "s1和s2最长公共子字符串= ";
    maxsubstr.display();
    strcomlen = maxsubstringLength(str1manip, str2manip);
    cout<<"(长度为"<<strcomlen<<")"<<endl;
    return 0;
}

