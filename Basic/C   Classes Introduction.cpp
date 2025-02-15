// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

// CollegeCourse Class 
class CollegeCourse
{
    //your code here
    string courseID = "";
    char grade = '#';
    int credits = 0;
    int gradePoint = 0;
    float honorPoints = 0.00;
    
    public:
    
    void set_CourseId(string CID)
    {
        courseID = CID;
    }
    
    void set_Grade(char g)
    {
        grade = g;
    }
    
    void set_Credit(int cr)
    {
        credits = cr;
    }
    
    int calculateGradePoints(char g)
    {
        char gl = tolower(g);
        
        if (gl == 'a') gradePoint = 10;
        if (gl == 'b') gradePoint = 9;
        if (gl == 'c') gradePoint = 8;
        if (gl == 'd') gradePoint = 7;
        if (gl == 'e') gradePoint = 6;
        if (gl == 'f') gradePoint = 5;
        
        return gradePoint;
    }
    
    float calculateHonorPoints(int gp, int gr)
    {
        honorPoints = gp*gr;
        return honorPoints;
    }
    
    void display()
    {
        
        cout << gradePoint << " " << honorPoints << endl;
        
    }
    
    
    
    
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    CollegeCourse cc;
    string courseId;
    int gp;
    char grade;
    int credits;
    cin>>courseId>>grade>>credits;
    cc.set_CourseId(courseId);
    cc.set_Grade(grade);
    cc.set_Credit(credits);
    gp=cc.calculateGradePoints(grade);
    cc.calculateHonorPoints(gp,credits);
    cc.display();
    }
    return 0;
}
  // } Driver Code Ends