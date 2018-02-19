#include <iostream>

using namespace std;
//Hello World progam
void HelloWorld() {
    std::cout << "-----------------" << std::endl;
    std::cout << "-- Hello World --" << std::endl;
    std::cout << "-----------------" << std::endl;
}

//Opgave 1, peas and pods.
void Opgave1_lektion1(){
    int number_of_pods, peas_per_pod, total_peas;
   std::cout << "Press return after entering a number."<<std::endl;
   std::cout << "Enter the number of pods:"<<std::endl;
   std::cin >> number_of_pods;
   std::cout << "Enter the number of peas in a pod:"<<std::endl;
   std::cin >> peas_per_pod;
   total_peas = number_of_pods * peas_per_pod;
   std::cout << "If you have ";
   std::cout << number_of_pods;
   std::cout << " pea pods"<<std::endl;
   std::cout << "and ";
   std::cout << peas_per_pod;
   std::cout << " peas in each pod, then"<<std::endl;
   std::cout << "you have ";
   std::cout << total_peas;
   std::cout << " peas in all the pods."<<std::endl;

}

//add hello world and goodbye to peas and pods.
void Opgave2_lektion1(){
    int number_of_pods, peas_per_pod, total_peas;
   std::cout << "-- Hello World --" << std::endl;
   std::cout << "Press return after entering a number."<<std::endl;
   std::cout << "Enter the number of pods:"<<std::endl;
   std::cin >> number_of_pods;
   std::cout << "Enter the number of peas in a pod:"<<std::endl;
   std::cin >> peas_per_pod;
   total_peas = number_of_pods * peas_per_pod;
   std::cout << "If you have ";
   std::cout << number_of_pods;
   std::cout << " pea pods"<<std::endl;
   std::cout << "and ";
   std::cout << peas_per_pod;
   std::cout << " peas in each pod, then"<<std::endl;
   std::cout << "you have ";
   std::cout << total_peas;
   std::cout << " peas in all the pods."<<std::endl;
   std::cout << "Goodbye." <<std::endl;
}

//change the * to a / and divide by 0, in the previous Opgave
//This crashes the program.
void Opgave3_lektion1(){
    int number_of_pods, peas_per_pod, total_peas;
   std::cout << "-- Hello World --" << std::endl;
   std::cout << "Press return after entering a number."<<std::endl;
   std::cout << "Enter the number of pods:"<<std::endl;
   std::cin >> number_of_pods;
   std::cout << "Enter the number of peas in a pod:"<<std::endl;
   std::cin >> peas_per_pod;
   total_peas = number_of_pods / peas_per_pod;
   std::cout << "If you have ";
   std::cout << number_of_pods;
   std::cout << " pea pods"<<std::endl;
   std::cout << "and ";
   std::cout << peas_per_pod;
   std::cout << " peas in each pod, then"<<std::endl;
   std::cout << "you have ";
   std::cout << total_peas;
   std::cout << " peas in all the pods."<<std::endl;
   std::cout << "Goodbye." <<std::endl;
}

//Modify the program to calculate the area of a circle
void Opgave4_lektion1(){
    double value_of_pi, area_of_circle, radius_of_circle;
   std::cout << "-- Hello World --" << std::endl;
   std::cout << "Press return after entering a radius."<<std::endl;
   std::cout << "Enter the radius of your circle:"<<std::endl;
   std::cin >> radius_of_circle;
   std::cout << "Enter the value of pi you want to use:"<<std::endl;
   std::cin >> value_of_pi;
   area_of_circle = (radius_of_circle)*(radius_of_circle) * (value_of_pi);
   std::cout << "If you have a circle with ";
   std::cout << radius_of_circle;
   std::cout << " radius "<<std::endl;
   std::cout << "and ";
   std::cout << value_of_pi;
   std::cout << " is the value of pi"<<std::endl;
   std::cout << "you have a circle with ";
   std::cout << area_of_circle;
   std::cout << " as the area."<<std::endl;
   std::cout << "Goodbye." <<std::endl;

}

int main()
{
    Opgave4_lektion1();
}
