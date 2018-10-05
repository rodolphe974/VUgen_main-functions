AddAnimal_RemoveAnimal()
{

	SelectAnimal();
	SelectProduct();
	
	for (compteur=1; compteur<=(lr_paramarr_len("itemId")); compteur++)
	{
		lr_save_string(lr_paramarr_idx("itemId",compteur), "randItem");
		SelectItem();
		ManageCart();				
	}

	return 0;
}