#include<iostream>
#include"reclists.hpp"
#include"solutions.hpp"

int main()
{
/*
    std::cout << "Enter another list: ";
    list q = read_list();


    //testing out first function numNodes at top level
    std::cout << "Testing number of Nodes at the top level." << std::endl;
    //entering lists p, q
    std::cout << "Enter a list: ";
    list p = read_list();
    write_list(p);
    std::cout << "The number of nodes at the top level of the input list p is: "
        << numNodesAtTheTopLevel(p) << std::endl;

    std::cout<< "Echoing the list q below.\n";
    write_list(q);


    std::cout << "Enter a list: ";
    list p = read_list();
    //testing if p is a list of atoms
    std::cout << "\nTesting the lat p function:\n";
    if (is_lat(p)) {
        std::cout << "\np is a list whose elements are all atoms (possibly empty).\n";
    } else {
        std::cout << "p is NOT a list of atoms.\n";
    }


    //testing if p is a member of in the list
    //FIX ME NOW
    std::cout << "Testing member function\n";
    std::cout << "Enter a atom: ";
    list p_mem = read_list();
    std::cout << "Enter a list: ";
    list q_mem = read_list();


    bool in_p = member(p_mem, q_mem);
    if (in_p)
    {
        std::cout << "The atom is in the list!\n";
    }
    else
    {
        std::cout << "It atom is NOT in the list.\n";
    }



    //now we check for the last atom in the list
    std::cout <<"\nTesting for last\n";
    std::cout << "\nEnter in a list:\n";
    list last_element = read_list();

    std::cout << "This is the last item";
    write_list((last(last_element)));
    std::cout<< std::endl;


    //testing for list pairings
    std::cout <<"\nTesting for list_pairings\n";
    std::cout <<"\nEnter two new lists of the same length\n";

    std::cout <<"Enter your first list: ";
    list s = read_list();
    std::cout <<"Enter your 2nd list: ";
    list first_list = read_list();
    std::cout << "This is the list pairing: ";
    write_list(list_pair(s, first_list));


    //testing for first items in the list
    std::cout <<"\nTesting for firsts\n";
    std:: cout << "\nEnter a list with a subset of lists\n";
    list r = read_list();
    std::cout << "These are the first atoms in the list:  ";
    write_list(firsts(r));


    //testing for flat items
    std::cout <<"\nTesting for flat\n";
    std:: cout << "\nEnter a list:\n";
    list x = read_list();
    std::cout << "These are all the atoms moved to the top level:  ";
    write_list(flat(x));

    //testing for two in the same items
    std::cout <<"\nTesting for two in the same\n";
    std:: cout << "\nEnter a list: \n";
    list tu = read_list();
    std:: cout << "\nEnter a list: \n";
    list tt = read_list();

    if(two_the_same(tu, tt))
    {
        std::cout << "They share an item in the list!\n";
    }
    else{
        std::cout << "They dont share any items\n";
    }


    //testing for equal
    std::cout <<"\nTesting for equal\n";
    std:: cout << "\nEnter a list: \n";
    list p_equal = read_list();
    std:: cout << "\nEnter a list: \n";
    list q_equal = read_list();

    if(equal(p_equal, q_equal))
    {
        std::cout << "They are similar lists!\n";
    }
    else{
        std::cout << "They aren't similar at all!\n";
    }


     //Testing for  structure
    std::cout <<"\nTesting for shape\n";
    std:: cout << "\nEnter a list: \n";
    list p_shape = read_list();

    std::cout << "This is the shape of the list\n";
    write_list(shape(p_shape));


    //testing for intersection

    std::cout <<"\nTesting for intersection\n";
    std:: cout << "\nEnter a list: \n";
    list p_intersection = read_list();
    std:: cout << "\nEnter a list: \n";
    list q_intersection = read_list();
    std::cout << "These are the new items in the list!:\n";
    write_list(intersection(p_intersection,q_intersection));


    //testing for total reverse

    std::cout <<"\nTesting for total reverse\n";
    std:: cout << "\nEnter a list: \n";
    list p_totalRev = read_list();
    std::cout << "These are the items reversed!:\n";
    write_list(total_reverse(p_totalRev));


    //testing for list_union

    std::cout <<"\nTesting for union\n";
    std:: cout << "\nEnter a list: \n";
    list p_listUnion = read_list();
    std:: cout << "\nEnter a list: \n";
    list q_listUnion = read_list();

    std::cout << "This is the lists in a union!:\n";
    write_list(list_union(p_listUnion,q_listUnion));


    //testing for substitute
    //PRE_COND = all lists that are being put into function will be flattened
    std::cout <<"\nTesting for substitute\n";
    std:: cout << "\nEnter an atom in the list: \n";
    list old_sub = read_list();
    std:: cout << "\nEnter an atom: \n";
    list new_sub = read_list();
    std:: cout << "\nEnter the list: \n";
    list p_sub = read_list();


    std::cout << "This is one of the old atoms being replaced with the new atom!:\n";
    write_list(substitute(old_sub,new_sub, p_sub));

     //testing for remove
    std::cout <<"\nTesting for remove\n";
    std:: cout << "\nEnter a list: \n";
    list p_remove = read_list();
    std:: cout << "\nEnter an atom: \n";
    list a_remove = read_list();



    std::cout << "This removes all the atoms called!: ";
    write_list(a_remove);

    std::cout << "\nThis is the new list: ";
    write_list(remove(p_remove, a_remove));


  //testing for subset
    std::cout <<"\nTesting for subset\n";
    std::cout << "Enter p:\n";
    list p_subset = read_list();
    std::cout << "Enter q:\n";
    list q_subset = read_list();

    if (subset(p_subset, q_subset)) std::cout << "\nTrue!\n";
    else              std::cout << "\nFalse\n";
*/
    return 0;


}
