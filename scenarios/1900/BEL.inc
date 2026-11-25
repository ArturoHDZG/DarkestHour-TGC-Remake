##############################
# Country definition for BEL #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = BEL
  ai                 = "Minors/BEL_1914.ai"
  ai_settings        = { }
  capital            = 116 # Brussels
  manpower           = 3
  # Resource Reserves
  energy         = 1980
  metal          = 990
  rare_materials = 495
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 100
  escorts        = 20

  diplomacy = {
    relation = { tag = AST value = 50 }
    relation = { tag = CAN value = 50 }
    relation = { tag = DEN value = 100 }
    relation = { tag = ENG value = 75 }
    relation = { tag = FRA value = 50 }
    relation = { tag = U08 value = -75 }
    relation = { tag = HOL value = 175 }
    relation = { tag = ITA value = 0 }
    relation = { tag = LUX value = 200 }
    relation = { tag = NOR value = 100 }
    relation = { tag = NZL value = 20 }
    relation = { tag = POR value = -50 }
    relation = { tag = SAF value = 35 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 50 }
  }
  SpyInfo                = { country = "BEL" NumberOfSpies = 6 }

  nationalprovinces      = { 108 110 111 112 113 114 115 116 117 }
  ownedprovinces         = { 114 115 116 112 113 108 117 111 894 901 904 903 905 906 902 898 897 899 }
  controlledprovinces    = { 114 115 116 112 113 108 117 111 894 901 904 903 905 906 902 898 897 899 }
  claimedprovinces       = { 846 847 894 897 898 899 901 902 903 904 905 906 }

  techapps               = { 1010 1020 1160 3810 5310 5800 6500 6510 8010 8020 8050 8060 8070 8100 13060 13070 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 8
    free_market       = 9
    professional_army = 4
    defense_lobby     = 4
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 70187 } # Albert I
  headofgovernment       = { type = 9 id = 70172 } # Charles de Broqueville
  foreignminister        = { type = 9 id = 70164 } # Jules Davignon
  armamentminister       = { type = 9 id = 70190 } # Aloys Van de Vyvere
  ministerofsecurity     = { type = 9 id = 70196 } # P. Berryer
  ministerofintelligence = { type = 9 id = 70183 } # Charles de Broqueville
  chiefofstaff           = { type = 9 id = 70158 } # Ridder de Selliers de Moranville
  chiefofarmy            = { type = 9 id = 70156 } # Albert I
  chiefofnavy            = { type = 9 id = 70206 } # Charles de Broqueville
  chiefofair             = { type = 9 id = 70152 } # Clément de Saint-Marcq

  landunit = {
    id       = { type = 18150 id = 1 }
    name     = "Armée Belge"
    location = 114
    division = {
      id             = { type = 18150 id = 2 }
      name           = "1ère Division d'Armée"
      type           = infantry
      model          = 2
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 18150 id = 3 }
      name           = "2ème Division d'Armée"
      type           = infantry
      model          = 2
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 18150 id = 4 }
      name           = "3ème Division d'Armée"
      type           = infantry
      model          = 2
      strength       = 50
      max_strength   = 50
    }
  }
  landunit = {
    id       = { type = 18150 id = 17 }
    name     = "Troupes du Congo-Kasaï"
    location = 899
    division = {
      id             = { type = 18150 id = 18 }
      name           = "Troupes du Congo-Kasaï"
      type           = militia
      model          = 1
      strength       = 45
      max_strength   = 50
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 18150 id = 19 }
    name     = "Troupes de l'Equateur"
    location = 906
    division = {
      id             = { type = 18150 id = 20 }
      name           = "Troupes de l'Equateur"
      type           = militia
      model          = 1
      strength       = 35
      max_strength   = 50
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 18150 id = 21 }
    name     = "Troupes de la province orientale"
    location = 905
    division = {
      id             = { type = 18150 id = 22 }
      name           = "Troupes de la province orientale"
      type           = militia
      model          = 1
      strength       = 45
      max_strength   = 50
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 18150 id = 23 }
    name     = "Troupes du Katanga"
    location = 898
    division = {
      id             = { type = 18150 id = 24 }
      name           = "Troupes du Katanga"
      type           = militia
      model          = 1
      strength       = 50
      max_strength   = 50
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 18150 id = 27 }
    name     = "Force Publique"
    location = 899
    division = {
      id             = { type = 18150 id = 28 }
      name           = "Garnison de Léopoldville"
      type           = garrison
      model          = 1
      strength       = 20
      locked         = yes
    }
  }

  navalunit = {
    id       = { type = 18150 id = 201 }
    name     = "1ste Transportatie Smaldeel"
    location = 114
    base     = 114
    division = {
      id             = { type = 11500 id = 202 }
      name           = "1er Transport Naval"
      type           = transport
    }
  }

  }
