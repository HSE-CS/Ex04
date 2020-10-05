int main(int argc, _TCHAR* argv[])
{
    ofstream fout("f_in.bin", ios_base::out | ios_base::binary);
    int n;
    cout << "Enter the number of people: " << endl;
    cin >> n;
    vector<Phonenote> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].surname >> arr[i].name >> arr[i].phoneNumber;
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i].birthday[j];
        }
    }
    sort(arr.begin(), arr.end(), comparator);

    for (int i = 0; i < arr.size(); i++)
    {
        fout.write((char*)&arr[i], sizeof arr[i]);
    }
    system("pause");
    return 0;
}