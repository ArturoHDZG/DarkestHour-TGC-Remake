##############################
# Country definition for PRU #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = PRU
  ai                 = "Minors/PRU_1914.ai"
  ai_settings        = { }
  capital            = 2016 # Lima
  manpower           = 4
  # Resource Reserves
  energy         = 600
  metal          = 300
  rare_materials = 150
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = ARG value = 20 }
    relation = { tag = BOL value = 30 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -25 }
    relation = { tag = COL value = -35 }
    relation = { tag = ECU value = -50 }
    relation = { tag = PAR value = 25 }
    relation = { tag = URU value = 25 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
    relation = { tag = U08 value = 30 }
    relation = { tag = ENG value = 30 }
  }
  SpyInfo                = { country = "PRU" NumberOfSpies = 4 }

  nationalprovinces      = { 2011 2012 2013 2014 2015 2016 2017 2018 2008 2010 2033 }
  ownedprovinces         = { 2011 2012 2013 2014 2015 2016 2017 2018 }
  controlledprovinces    = { 2011 2012 2013 2014 2015 2016 2017 2018 }

  techapps               = { 1010 1020 1160 3010 3110 3610 3810 6500 6510 13060 13070 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 5
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 5
  }

  landunit = {
    id       = { type = 17600 id = 1 }
    name     = "Ejército del Perú"
    location = 2016
    division = {
      id             = { type = 17600 id = 2 }
      name           = "Ejército del Perú"
      type           = infantry
      model          = 1
      strength       = 30
    }
  }

  navalunit = {
    id       = { type = 17600 id = 6 }
    name     = "Marina de Guerra del Perú"
    location = 2016
    base     = 2016
    division = {
      id             = { type = 17600 id = 7 }
      name           = "Suliana é Flotilla"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 17600 id = 8 }
      name           = "ARP Almirante Grau"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 17600 id = 9 }
      name           = "ARP Coronel Bolognesi"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 17600 id = 10 }
      name           = "Tacna é Flotilla"
      type           = submarine
      model          = 1
    }
  }
}
