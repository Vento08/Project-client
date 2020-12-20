namespace Project1
{
    using namespace System;

    ref class Food
    {
    public:
        System::String^ Name;
        System::Double Belki;
        System::Double Zhiri;
        System::Double Uglevodi;

        Food(System::String^ name, System::Double b, System::Double z, System::Double u)
        {
            Name = name;
            Belki = b;
            Zhiri = z;
            Uglevodi = u;
        }

        static System::Collections::Generic::List<Food^>^ FoodList;

        static System::Void Init()
        {

            FoodList = gcnew System::Collections::Generic::List<Food^>();
            array<System::String^>^ file = System::IO::File::ReadAllLines("Food.txt", System::Text::Encoding::UTF8);
            for (int i = 0; i < file->Length; i++)
            {
                array<String^>^ str = file[i]->Split(',');
                FoodList->Add(gcnew Food(str[0], System::Convert::ToDouble(str[1]), System::Convert::ToDouble(str[2]), System::Convert::ToDouble(str[3])));
            }
        }
    };
}