int main() {
    /* The first name in an enum have value 0, the next 1, and so on
     * unless explicit values are specifed
     */
    enum boolean {NO, YES};


    /* If not all values are specifed,
     * unspecified values continue the progression form the last specified
     * JAN = 1, FEB = 2, MAR = 3, ...
     */
    enum months { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
}