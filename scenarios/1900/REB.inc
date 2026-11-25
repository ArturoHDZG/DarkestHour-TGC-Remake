##############################
# Country definition for REB #
##############################

#####################
# Country main data #
#####################

country = {
	tag      = REB
	capital  = 776
	manpower = 0

	# Resource Reserves
	energy         = 0
	metal          = 0
	rare_materials = 0
	oil            = 0
	supplies       = 0
	money          = 0

	nationalprovinces   = { }
	ownedprovinces      = { }
	controlledprovinces = { 776 }

	landunit = {
		id       = { type = 24100 id = 9 }
		location = 776
		division = {
			id           = { type = 24100 id = 10 }
			type         = militia
			model        = 0
			strength     = 1
			max_strength = 2
			locked       = yes
		}
	}
}
