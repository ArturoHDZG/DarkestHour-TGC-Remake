##############################
# Country definition for SAF #
# Boer Republics (ZAR & OFS) #
##############################

country = {
  tag                = SAF
  flag_ext           = _14
  ai                 = "Minors/SAF_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 873 # Pretoria
  manpower           = 25
  # Resource Reserves
  energy         = 800
  metal          = 400
  rare_materials = 200
  oil            = 100
  supplies       = 800
  money          = 50
  transports     = 10

  diplomacy = {
    relation = { tag = ENG value = -200 }
    relation = { tag = U08 value = 125 }
    relation = { tag = HOL value = 150 }
    relation = { tag = FRA value = 50 }
    relation = { tag = RUS value = 50 }
    relation = { tag = USA value = 25 }
  }
  SpyInfo                = { country = "SAF" NumberOfSpies = 3 }

  nationalprovinces      = { 873 875 876 }
  ownedprovinces         = { 873 875 876 }
  controlledprovinces    = { 873 875 876 }
  claimedprovinces       = { 872 878 879 880 881 }

  techapps               = { 1010 1020 1160 3010 3810 5010 6500 6510 8010 13060 13070 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 3
    freedom           = 6
    free_market       = 7
    professional_army = 2
    defense_lobby     = 10
    interventionism   = 8
  }

  headofstate            = { type = 9 id = 425150 } # Paul Kruger
  headofgovernment       = { type = 9 id = 425106 } # Christiaan De Wet
  foreignminister        = { type = 9 id = 425102 } # Louis Botha
  armamentminister       = { type = 9 id = 425113 } # Christiaan De Wet
  chiefofstaff           = { type = 9 id = 425097 } # Christiaan Beyers

  landunit = {
    id       = { type = 27111 id = 1 }
    name     = "Z.A.R. Kommando"
    location = 873
    division = {
      id             = { type = 27111 id = 2 }
      name           = "Pretoria Kommando"
      type           = cavalry
      model          = 2
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 27111 id = 3 }
      name           = "Staatsartillerie"
      type           = infantry
      model          = 2
      strength       = 100
      experience     = 30
    }
  }

  landunit = {
    id       = { type = 27111 id = 4 }
    name     = "Vrystaat Kommando"
    location = 875
    division = {
      id             = { type = 27111 id = 5 }
      name           = "Bloemfontein Kommando"
      type           = cavalry
      model          = 2
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 27111 id = 6 }
      name           = "Kroonstad Kommando"
      type           = infantry
      model          = 2
      strength       = 100
      experience     = 20
    }
  }

  landunit = {
    id       = { type = 27111 id = 7 }
    name     = "Witwatersrand Kommando"
    location = 876
    division = {
      id             = { type = 27111 id = 8 }
      name           = "Johannesburg Kommando"
      type           = cavalry
      model          = 2
      strength       = 100
      experience     = 20
    }
  }
}
