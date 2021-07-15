/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 19:56:24 by olidon            #+#    #+#             */
/*   Updated: 2020/12/05 16:53:32 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubeberyForm", 145, 137, "DefaultTarget")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("ShrubeberyCreationForm", 145, 137, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm			&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &)
{
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void							ShrubberyCreationForm::SpecificFormExec(std::string const &target) const
{
	std::stringstream	filename;
	std::ofstream		ofs;

	filename << target << "_shrubbery";

	ofs.open(filename.str().c_str());
	if (ofs.fail())
	{
		std::cout << "Error: Could not open the Shrubbery file" << std::endl;
		return ;
	}
	ofs << "........................................................................................................................" << std::endl;
	ofs << "........................................................................................................................" << std::endl;
	ofs << "........................................................................................................................" << std::endl;
	ofs << "........................................................................................................................" << std::endl;
	ofs << "........................................................................................................................" << std::endl;
	ofs << "........................................................................................................................" << std::endl;
	ofs << ".........................................................=...=.........................................................." << std::endl;
	ofs << "......................................................=.====.===.=.=...................................................." << std::endl;
	ofs << "....................................................========.==========................................................." << std::endl;
	ofs << "...............................................===========I================............................................." << std::endl;
	ofs << ".........................................=....========I===II=I=I=III=I======............................................" << std::endl;
	ofs << ".........................................=.=.======I==III=II=III=II==I======............................................" << std::endl;
	ofs << ".......................................=.==========II=IIIIII=I=IIII=I=====I=.===........................................" << std::endl;
	ofs << ".....................................=..========I===IIIIIIII=IIIIII=I=I==II======.==...................................." << std::endl;
	ofs << ".....................................============I=II=IIIIIIIAIIIAI=I====II========.==.................................." << std::endl;
	ofs << "....................................=====I=I===I=.=III=IIIIAAIIIIAI=I==IIII============................................." << std::endl;
	ofs << ".....................................=====II==III==IIAI=IIIAII=AIAIII=IIII===II=======.................................." << std::endl;
	ofs << "...................................==.======II=III==IAIIIIIAII=AAIII=II==I===II=I=====.==.=............................." << std::endl;
	ofs << "....................................========IIIIIII=IIAIIIAAIIIIAIII==I==I==IIIII==I===.===............................." << std::endl;
	ofs << ".............................=....=========IIIIIIIIIIIAIIAAAIIIIAIII=IAIII=IIIIIIII=========..==........................" << std::endl;
	ofs << "..............................===.======I===IIAAAIIIIAAAIAAAAIAIAIIIIIAIIIAIIAAI======.=======.==......................." << std::endl;
	ofs << "............................===I===========IIIIAAAIIIIAAAAAAAIAIAIAI=II=IAAIII===I==============........................" << std::endl;
	ofs << "..............................==I======III==IIIIIIAAI=AAIAAXAAAAIAAIIAAIAAIIIIII=I===IIII======....=...................." << std::endl;
	ofs << "............................=..=IAI===IIIIIIIIIIIAAAAAIAIXIXAAXAIAXAAIIAAAIIAII=IIIIIII=======..===....................." << std::endl;
	ofs << "...........................====..IAII=IIIII=IIIIAIAIAAAAAXAXAAXAIAAAIAAAAIIIAIIIIIIIIII=====.=.===......................" << std::endl;
	ofs << "..................=........=======IIIIIIIIIAIIIIIIIAAXAAAXAAXXXAIXAIAXIAAA=AIIA==I=II=====I=====........................" << std::endl;
	ofs << "..................==......=========IIAIIIAIIIIAAAIIIAAAAAXAXXXXAAXAAAAAAAIAIIII==III=======.=========..................." << std::endl;
	ofs << "...................=I==..=====I======IIIIIAAIAIIIAAAAAXXAXXXXAXAAXAXXIAAIAIIIIIIAII==.==IIII==III===...................." << std::endl;
	ofs << "....................=II===I====IIIIIIIAAAAIAAAAAIIIAXXXXXXXXXXXAAAAAAAXAAAAAAAAIIIIIAAAAIIIIII====......................" << std::endl;
	ofs << "....................==IIIIIIIIIIIIAAAAAAXAAAAIIIAIIIAXXXMXXXMXAAXXIAXAAXAAAAIII=IIII======IIII=I=====..................." << std::endl;
	ofs << "................==..====IIIIAAAIIIIAIAAAAAXAAXAIIIAAAIXAAMXMMMXXAAXXXXXXAIIIIIIAIIIIIIIIIIIIIII========................." << std::endl;
	ofs << "...............=====I====IIAAAAAIII=====IIAXXAXXAAIAAAAXIAMMXMXAAAXMMXAIIAAAI=====IIIIIIIAII========...................." << std::endl;
	ofs << "...................=====IIIIIIAAAAAAAIIIIIIAAAIAAXMMXXXXXXMMXMMXXMMXAIAAAAAIII====IIAAAAIIII====.=.........=............" << std::endl;
	ofs << "...................========IIIIIAXXAAAIIAIIIIIAAAIAXAAAXAXXMMMXXMMMAAIIAAAAAIAIIIIAAAIAIII==========..=====............." << std::endl;
	ofs << "................=======II=========IAAAAXXXXAAAAAXXAAXAAIXMMMMXXMMMAIAAAAIAAXXAAAAAII==II=========..======..............." << std::endl;
	ofs << "..........========.======IIIIIIIIIIIAAAXXXXXXXXAAXXXXXXXAXMMMMMMXXAAAXAAAAAXAAAAAIIIIIIIIIIIIIIIIIII===................." << std::endl;
	ofs << "............===IIIAIIIIIIIIAIAAAAXXXXXXXXXXXXXAXXAXAXXMXXMMMMMMXMXXXXAAAAAAAIIAIIAAAAAAIAAIIIIIII=====.................." << std::endl;
	ofs << "................=======IIIIIIIAAAAAAAAAXAXAAAAXMMMXXAAMXIAMMMMMMMXMXXXXXXXXXXXAAAIIIIIIIIIIIIAII========................" << std::endl;
	ofs << ".................====II==I=IIIIIIIIAIAAXAAAAXXXXXXXMXXXMMAMMMMXIAXXAAXXXXXXXXXXAAAAAAAAAIAAIIIIII=====.................." << std::endl;
	ofs << "...............====================IIIAAAXAXXXXXAXXMMMMMXMMWMMMMXXXXXAAAAAAIAAXXXAAAAAII================................" << std::endl;
	ofs << ".....................==...======IIIAAAXXXAAAAXAXIAAIAXMMAAMWWMXAXAAXXXAXAAXXAXAXXXAIIIIIII====I=======.=................" << std::endl;
	ofs << "..................=====IIIIIIAAAAAAAAAAAI=IAIAAA=IIAXXAXMXMMMXIAAAAXXXXXAXAIAAAAAAAAAAAAIIIII==========................." << std::endl;
	ofs << ".................=====IIIIIIAAAIIIII=I=IIIIAXAAIAAIAXXXAIMMMMXIAIAAXXXAAXXXXXAIIIAAAIAIIAIIIII=====I====................" << std::endl;
	ofs << ".................=======III=I======IIIIIIIAXAAAAIIAAIIIAAAMMMAAAAAIIIAXXXMXXXXAIII==IIIII==IIIII=======................." << std::endl;
	ofs << "................=================II==IIIAAAAAAAIIAI===IIIMMMMXAIIAIIIIIAAXXXXXXXAAII==IIII======.=.===.................." << std::endl;
	ofs << "..................====..=============IIAAAAAIIIIIII===IIIXMMMAIIAIIAIII=IAAAAAXXAAIIAII==============..................." << std::endl;
	ofs << "........................============IAAAIAII===I======I==AMMMAIII=IAI====IIIAAAAAAAAIIIIIII===========.................." << std::endl;
	ofs << "......................======..======III===II============IIMMMIIIIIII=====I===IAAAAIAAI=I========........................" << std::endl;
	ofs << "===================.....==....==============I=============MMMI=================IIAAIIIIIIII========....................." << std::endl;
	ofs << "==========================.....================..=========MMMI===================IIIIII====I==.==......................." << std::endl;
	ofs << "==============================================....========MMMI=.......=================I===I====........................" << std::endl;
	ofs << "================================================..=.======MMMA==......==.=.......===..===.===.==........................" << std::endl;
	ofs << "==========================================================MMMA=================.=========..==.......=========..........." << std::endl;
	ofs << "==========================================================MMMX==========================================================" << std::endl;
	ofs << "=========================================================IMMMX==========================================================" << std::endl;
	ofs << "========II==IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIAAAIIAIIXMMMMAIIIIAAAIIIIIIIIIIIIIII=IIIII=IIIIIIIIIIII================" << std::endl;
	ofs << "XXXXXXXXXXXXXXXXXXXXXXXXXXMXXXXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << std::endl;
	ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXMMM" << std::endl;
	ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
	ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWMMWMMMMMWWWWMMWWWWWWWWWWWWMWMWMMWMMWMMMMWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;

	ofs.close();
}


/* ************************************************************************** */
