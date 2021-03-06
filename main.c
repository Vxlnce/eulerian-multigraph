/* Solution to comp10002 Assignment 2, 2018 semester 2.

   Authorship Declaration:

   (1) I certify that the program contained in this submission is completely
   my own individual work, except where explicitly noted by comments that
   provide details otherwise.  I understand that work that has been developed
   by another student, or by me in collaboration with other students,
   or by non-students as a result of request, solicitation, or payment,
   may not be submitted for assessment in this subject.  I understand that
   submitting for assessment work developed by or in collaboration with
   other students or non-students constitutes Academic Misconduct, and
   may be penalized by mark deductions, or by other penalties determined
   via the University of Melbourne Academic Honesty Policy, as described
   at https://academicintegrity.unimelb.edu.au.

   (2) I also certify that I have not provided a copy of this work in either
   softcopy or hardcopy or any other form to any other student, and nor will
   I do so until after the marks are released. I understand that providing
   my work to other students, regardless of my intention or any undertakings
   made to me by that other student, is also Academic Misconduct.

   (3) I further understand that providing a copy of the assignment
   specification to any form of code authoring or assignment tutoring
   service, or drawing the attention of others to such services and code
   that may have been made available via such a service, may be regarded
   as Student General Misconduct (interfering with the teaching activities
   of the University and/or inciting others to commit Academic Misconduct).
   I understand that an allegation of Student General Misconduct may arise
   regardless of whether or not I personally make use of such solutions
   or sought benefit from such actions.

   Signed by: Charlie Hutcheson 995351
   Dated:     2018-10-03 18:27:32

*/

#include "list.h"
#include "stage0.h"
#include "stage1.h"

char startingPoint;

int main(int argc, char** argv) {
    
    startingPoint = *argv[1]; // grab first arg in console

    size_t maxVertex = 0x35;
    vertex_t arrVertex;
    arrVertex.vertex = (char*)malloc(sizeof(char) * maxVertex);
    arrVertex.degree = (int*)malloc(sizeof(int) * maxVertex);

    char* str;
    str = getInput(&str, &arrVertex);
    edge_t* arrEdge;
    arrEdge = (edge_t*)malloc((sizeof(edge_t) * cNewline) * 0xfff);

    fillArray(arrEdge, str);

    stage0(arrEdge, arrVertex);
    

    return 0;

}
