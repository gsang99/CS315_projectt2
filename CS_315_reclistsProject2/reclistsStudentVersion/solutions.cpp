#include "reclists.hpp"
#include "solutions.hpp"

// As you implement functions in this file, you should add the
// function-prototype to the solutions.hpp.
//


int numNodesAtTheTopLevel(list p) {
    // p is one of
    //    a null list
    //    an atom
    //    a recursive list

    // The function returns the number of nodes at the top-level
    // of p.

    if( is_null(p) )
        return 0;
    if( is_atom(p) )
        return 1;
    return 1 + numNodesAtTheTopLevel(cdr(p));
}


bool is_lat(list p)
{
    // if the list is empty
    if (is_null(p))
    {
        return true;
    }

    //if the list isn't an atom
    // return false and recursively call the function
    if (!is_atom(car(p)))
    {
        return false;

    }
    //only return true if the atom is in the list and its not empty
    return is_lat(cdr(p));

    //otherwise iterate to the next problem

}

bool member(list p, list q)
{
    //Takes an atom p and a list q (possibly empty but not an atom).
    // Returns true if p appears anywhere in q. If the inputs do not meet these conditions, behavior is undefined.
    //p is the atom
    //q is the list
    //checking if q is null
    if (is_null(q))
    {
        return false;
    }

    if (is_atom(car(q)))
    {

        if( eq(p, car(q)))
        {
            return true;
        }
    }
    else{
        if(member(p, car(q)))
        {
            return true;
        }
    }




    return member(p, cdr(q));
}

list last(list p)
{
    //Takes a non-empty list (not an atom) and returns its last element.
    // This must be done without using reverse. For example:
    //
    //last((a b c)) = c

    if (is_null(cdr(p)))
    {
        return car(p);
    }

    return last(cdr(p));
}

//helper function append
list append(list p, list q)
{

    if (is_null(p))
        return q;

    return cons(car(p), append(cdr(p), q));

}


//PRE-condition, the lists we are given are always already going to be the same length
list list_pair(list p, list q)
{
    //Takes two lists of atoms of the same length and returns a list of pairs,
    // where each pair contains corresponding atoms from p and q. For example:
    //
    //list_pair((a b c), (d e f)) = ((a d) (b e) (c f))
    //base case
    if (is_null(p))
    {
        return p;
    }

   //we take the first two items together and CONS them together rather than append them

    return cons(cons(car(p), cons(car(q), null())), list_pair(cdr(p), cdr(q)) );


}

list firsts(list p)
{
    //Takes as input a list whose elements are lists of atoms
    // and returns a list of the first element from each sublist. For example:
    //
    //firsts(((a b c) (d e f) (c d b a))) = (a d c)
    // the base case
    if (is_null(p))
    {
        return p;
    }

    if(is_null(car(p)))
    {
        return firsts((cdr(p)));
    }

    if(!is_atom(car(car(p))))
    {
        return firsts(cdr(p));
    }

    //we go into the first item in the list
    // make a new list of the first atom from the first list

    return cons( car(car(p)), firsts(cdr(p)));


}

list flat(list p)
{
    //Takes a list (not an atom) and returns a list in which all nested parentheses are removed (except the outer set).
    // For example:

    //flat((a (b) (c d))) = (a b c d)

    //base case
    if (is_null(p))
    {
        return p;
    }

    if (is_atom(p))
    {
        return cons(p, null());
    }

    if (is_atom(car(p)))
    {
        return cons(car(p), flat(cdr(p)));
    }

    return append(flat(car(p)), flat(cdr(p)));

}

bool two_the_same(list p, list q)
{
    //Takes two lists (not atoms) and returns true if p and q contain at least one atom in common.

    //test the base case
    if (is_null(p) || is_null(q))
    {
        return false;
    }

    //if the list has atoms in it and are equal to each other
    list new_p = flat(p);
    list new_q = flat(q);

    //double checking after flattening
    if (is_null(new_p) || is_null(new_q))
    {
        return false;
    }

    if (member(car(new_p), new_q))
    {
            //return immediately
            return true;

    }
    return two_the_same(cdr(new_p), new_q);


}


bool equal(list p, list q)
{
    //Takes two recursive lists and determines if they are identical:
    // parentheses must match in structure and all atoms must be identical in name and position.
    // This is an extension of eq.

    if (is_null(p) && is_null(q))
    {
        return true;
    }

    if(is_null(p) || is_null(q))
    {
        return false;
    }

    if (is_atom(p) && is_atom(q))
    {
        return eq(p, q);
    }

    if (is_atom(p) || is_atom(q))
    {
        return false;
    }

    return equal(car(p), car(q)) && equal(cdr(p), cdr(q));




}

list shape(list p) {
    //Takes a recursive list (not an atom) and returns a recursive list that consists only of the
    // parentheses structure of the original.

    //checking base case
    if (is_null(p)) {
        return null();
    }

    //if its an atom return null
    if (is_atom(p)) {
        return null();
    }

    return cons(shape(car(p)), shape(cdr(p)));
}

list intersection(list p, list q)
{
    //Takes two lists of distinct atoms (representing sets) and
    // returns a list of atoms that appear in both p and q.
    // The empty list represents the empty set.

    //base case
    if(is_null(p))
    {
        return null();
    }

    if(is_null(q))
    {
        return null();
    }

    if (member(car(p),q))
    {
        return cons(car(p),intersection(cdr(p), q));
    }
    return intersection(cdr(p),q);

}

list total_reverse(list p)
{
    //Takes a recursive list and returns its mirror image.
    // This extends reverse by reversing both the top-level list and all sublists recursively.
        if (is_null(p))
            return p;

        if (!is_atom(car(p)))
        {
            return append(total_reverse(cdr(p)), cons(total_reverse(car(p)), null()));
        }

        return append(total_reverse(cdr(p)), cons(car(p), null()));

}


list list_union (list p, list q)
{
    //Takes two lists of distinct atoms (representing sets) and
    // returns a list of the union of p and q, without repetition.

    //make copies of both of the lists and pass them to flatten to make it easy to go through them
    list new_p = flat (p);
    list new_q = flat(q);

    //if only one of them is empty
    if (is_null(new_p))
    {
        return new_q;
    }

    if (is_null(new_q))
    {
        return new_p;
    }


    if (member(car(new_p), new_q))
    {
        //otherwise call union to move onto the next list in
        return list_union(cdr(new_p),(new_q));

    }
    //save it immediately into a seperate list and then call union and move onto next item the next list
    return cons(car(new_p),list_union(cdr(new_p),new_q));


}

list substitute(list old, list newN, list p)
{
    //Takes a list of atoms (atoms may repeat) and returns a copy of p with every occurrence
    // of atom old replaced by atom new. For example:
    //
    //substitute(a, x, (a b a c)) = (x b x c)

    //check if empty

    if (is_null(p))
    {
        return null();
    }

    //flatten the list
    list new_p = flat(p);

    if (eq(car(new_p), old))
    {
        // replace the spot that has old atom with the new atom and return it and then iterate
        return cons(newN , substitute(old, newN, cdr(new_p)));
    }

    return cons(car(new_p), substitute(old, newN, cdr(p)));

}

list remove(list p, list a)
{
    //Takes a list of atoms and an atom a, and returns a list that does not contain a.
    // All occurrences of a are removed. For example:
    //
    //remove((a b a c b), a) = (b c b)

    //check if the list is null

    if (is_null(p))
    {
        return null();
    }

    //then use flatten to make sure the list is flat before removing
    list new_p = flat(p);

    //after we check if q the atom is equal to the new p list
    if (eq(car(new_p), a))
    {
        return remove(cdr(new_p), a);
    }
        return cons(car(new_p), remove(cdr(new_p),a));
}

bool subset(list p, list q)
{
    //Takes two lists (neither of which is an atom) and returns true if every atom in p also appears in q (treating them as sets). For example:
    //
    //subset(((a) b), ((a) b c)) = true
    //subset(((a b) c), (c (a b) d)) = true
    //subset(((a b) c), (c d)) = false
    //subset((a b), (a b c d)) = true
    //subset((a d), (a b c)) = false

    list new_p = flat(p);

    if (is_atom(new_p))
    {
        new_p = cons(new_p, null());
    }

    list new_q = flat(q);

    if (is_atom(new_q))
    {
        new_q = cons(new_q, null());
    }

    if (is_null(new_p))
    {
        return true;
    }


    //if we call equal, to check if every single one is true then we
    if(!member( car(new_p),new_q))
    {
        return false;
    }

    return subset(cdr(new_p),new_q);
}