int main()
{
TCHAR name [ UNLEN + 1 ];
DWORD size = UNLEN + 1 + 1 - 1; //lmao 

if (GetUserName( (TCHAR*)name, &size ))
wcout << L"Great welcome, " << name << L"\n";
else
cout << "tf how do u not have a user\n";
}
