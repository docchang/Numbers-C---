#include <iostream>

#include "Number.h"
#include "Integer.h"
#include "Float.h"
#include "Complex.h"
#include "Complex_Integer.h"
#include "Complex_Float.h"
#include "List.h"
#include "ListIt.h"

// a handy macro that helps make the output understandable.
// it prints out what's being invoked
// and then the output enclosed within colons.
#define X(x) cout << #x ":"; x; cout << ":" << endl;

int main(void)
{
    // Part 1
    // instantiate some elements
    Integer i1(3);
    Integer i2(-2);
    Integer i3(99);
    Float f1(2.7);
    Float f2(-77);
    Complex_Integer ci1(2, 4);
    Complex_Integer ci2(-1, -23);
    Complex_Float cf1(9.3, 4.7);
    Complex_Float cf2(-9, 7.992);

    X( i1.print() );
    X( i2.print() );
    X( i3.print() );
    X( f1.print() );
    X( f2.print() );
    X( ci1.print() );
    X( ci2.print() );
    X( cf1.print() );
    X( cf2.print() );

    // do everything twice just to double check
    X( i1.print() );
    X( i2.print() );
    X( i3.print() );
    X( f1.print() );
    X( f2.print() );
    X( ci1.print() );
    X( ci2.print() );
    X( cf1.print() );
    X( cf2.print() );
    
    // check out virtualness
    Number *x;
    x = &i1;
    X( x->print() );
    x = &ci2;
    X( x->print() );



    Number *Int, *Flo, *CInt, *CFloat;

    Int = new Integer(3);
    Flo = new Float(3.7);
    CInt = new Complex_Integer(3, 4);
    CFloat = new Complex_Float(7.9, 2.1);

    X( Int->print() );
    cout << endl;
    X( Flo->print() );
    cout << endl;
    X( CInt->print() );
    cout << endl;
    X( CFloat->print() );
    cout << endl;

    delete Int;
    delete Flo;
    delete CInt;
    delete CFloat;

    Integer i(7);
    Float f(8.3);
    Complex_Integer ci(3, 2);
    Complex_Float cf(2.3, 3.7);

    X( i.print() );
    cout << endl;
    X( f.print() );
    cout << endl;
    X( ci.print() );
    cout << endl;
    X( cf.print() );
    cout << endl;

    // Part 4
    Number & ir = i;
    Number & fr = f;
    Number & cir = ci;
    Number & cfr = cf;

    X( ir.print() );
    cout << endl;
    X( fr.print() );
    cout << endl;
    X( cir.print() );
    cout << endl;
    X( cfr.print() );
    cout << endl;

    // Part 2
    cout << "Numbers: " << Number::get_count() << endl;
    cout << "Integers: " << Integer::get_count() << endl;
    cout << "Floats: " << Float::get_count() << endl;
    cout << "Complexes: " << Complex::get_count() << endl;
    cout << "Complex_Integers: " << Complex_Integer::get_count() << endl;
    cout << "Complex_Floats: " << Complex_Float::get_count() << endl;

    // Part 3
    cout << "Adding\n";
    Number * ip = ir + ir;
    Number * fp = fr + fr;
    Number * cip = cir + cir;
    Number * cfp = cfr + cfr;

    X( ip->print() );
    cout << endl;
    X( fp->print() );
    cout << endl;
    X( cip->print() );
    cout << endl;
    X( cfp->print() );
    cout << endl;

    delete ip;
    delete fp;
    delete cip;
    delete cfp;

    // Part 4
    ip = ir + ir;
    fp = fr + ir;
    cip = ir + cir;
    cfp = fr + cir;

    X( ip->print() );
    cout << endl;
    X( fp->print() );
    cout << endl;
    X( cip->print() );
    cout << endl;
    X( cfp->print() );
    cout << endl;

    delete ip;
    delete fp;
    delete cip;
    delete cfp;

    ip = ir + ir;
    fp = fr + ir;
    cip = ir + cir;
    cfp = ir + cfr;

    X( ip->print() );
    cout << endl;
    X( fp->print() );
    cout << endl;
    X( cip->print() );
    cout << endl;
    X( cfp->print() );
    cout << endl;

    delete ip;
    delete fp;
    delete cip;
    delete cfp;

    ip = ir + ir;
    fp = fr + ir;
    cip = ir + cir;
    cfp = cir + cfr;

    X( ip->print() );
    cout << endl;
    X( fp->print() );
    cout << endl;
    X( cip->print() );
    cout << endl;
    X( cfp->print() );
    cout << endl;

    // Part 5
    List list, list2, list3;

    list.insert(&ir);
    list.insert(&fr);
    list.insert(&cir);
    list2.insert(&fr);
    list2.insert(&cir);
    X( list.print() );
    X( list2.print() );
    list.insert(&cfr);
    X( list.print() );
    X( list3.print() );

    // Part 6
    ListIt iter(list);

    while (iter.hasNext())
    {
	iter.next()->print();
	if (iter.hasNext())
	    std::cout << ", ";
    }
    std::cout << std::endl;
    list.insert(ip);
    list.insert(fp);
    list.insert(cip);
    list.insert(cfp);

    X( list.print() );

    ListIt iter2(list);

    while (iter2.hasNext())
    {
	iter2.next()->print();
	if (iter2.hasNext())
	    std::cout << ", ";
    }
    std::cout << std::endl;

    void myprint(List);
    void cross(List, List);

    X( myprint(list) );
    X( myprint(list2) );
    X( myprint(list3) );

    X( cross(list, list2) );
    X( cross(list2, list) );
    X( cross(list, list3) );
    X( cross(list3, list) );
    X( cross(list, list) );
    X( cross(list3, list3) );

    delete ip;
    delete fp;
    delete cip;
    delete cfp;

    cout << "Numbers: " << Number::get_count() << endl;
    cout << "Integers: " << Integer::get_count() << endl;
    cout << "Floats: " << Float::get_count() << endl;
    cout << "Complexes: " << Complex::get_count() << endl;
    cout << "Complex_Integers: " << Complex_Integer::get_count() << endl;
    cout << "Complex_Floats: " << Complex_Float::get_count() << endl;
}

void myprint(List l)
{
    ListIt t(l);
    while (t.hasNext())
    {
        t.next()->print();
        cout << "!";
    }
    cout << endl;
}

void cross(List l1, List l2)
{
    Number *e1, *e2;
    ListIt t1(l1);
    while (t1.hasNext())
    {
	e1 = t1.next();
        ListIt t2(l2);
        while (t2.hasNext())
	{
	    e2 = t2.next();
            cout << "   ";
            e1->print();
            cout << " ";
            e2->print();
            cout << endl;
        }
    }
}
