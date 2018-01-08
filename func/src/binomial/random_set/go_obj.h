
#ifndef GO_OBJ_H
#define GO_OBJ_H

#include <string>
#include <vector>
#include <set>
#include <iostream>

using std::vector ;
using std::set ;
using std::ostream ;
using std::string ;

/************
 * encapsulates information a GO-Group contains:
 * Name, Number Genes, left and right values for binom test 
 *************/
class go_obj
{
	public:
		go_obj( string &name_ ) ;
		void add_parent( go_obj* p ) ;
		void get_parents( set<go_obj*> *parentset ) ;
		void add_hka( int x ) ; 
		void add_cka( int x ) ; 
		void add_gene( ) ; 
		void clear_ka(  ) ; 
		void print_ka( ostream &os ) ;
		void print_nr_genes( ostream &os ) ;

	private:
		string name ;
		vector<go_obj*> parents ;
		int hka, cka ;
		int nr_genes ;
} ;

#endif
