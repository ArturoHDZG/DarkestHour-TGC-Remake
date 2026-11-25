##############################
# Country definition for HAI #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = HAI
  ai                 = "Minors/HAI_1914.ai"
  ai_settings        = { }
  capital            = 1781 # Port-au-Prince
  dissent            = 10
  manpower           = 2
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = CUB value = 30 }
    relation = { tag = DOM value = -75 }
    relation = { tag = USA value = 100 access = yes }
    relation = { tag = ENG value = 25 }
    relation = { tag = U08 value = 25 }
    relation = { tag = FRA value = 35 }
    relation = { tag = CAN value = 35 }
  }
  SpyInfo                = { country = "HAI" NumberOfSpies = 1 }

  nationalprovinces      = { 1781 }
  ownedprovinces         = { 1781 }
  controlledprovinces    = { 1781 }
  claimedprovinces       = { 1780 }

  techapps               = { 1010 6500 6510 13060 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 6
    freedom           = 6
    free_market       = 4
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 350098 } # Oreste Zamor
  headofgovernment       = { type = 9 id = 350089 } # Oreste Zamor
  foreignminister        = { type = 9 id = 350103 } # Jacques Nicolas Léger

  landunit = {
    id       = { type = 17500 id = 53 }
    name     = "Armée d'Haïti"
    location = 1781
    division = {
      id             = { type = 17500 id = 5301 }
      name           = "Armée d'Haïti"
      type           = infantry
      model          = 0
      strength       = 15
    }
  }
}
