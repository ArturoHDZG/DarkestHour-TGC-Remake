##############################
# Country definition for LUX #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = LUX
  ai                 = "Minors/LUX_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 109 # Luxembourg
  manpower           = 2
  # Resource Reserves
  energy         = 300
  metal          = 150
  rare_materials = 75
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = BEL value = 150 }
    relation = { tag = DEN value = 100 }
    relation = { tag = FRA value = 120 }
    relation = { tag = U08 value = 100 }
    relation = { tag = HOL value = 150 }
    relation = { tag = NOR value = 50 }
    relation = { tag = SWE value = 50 }
    relation = { tag = USA value = 30 }
    relation = { tag = BRA value = 25 }
    relation = { tag = ENG value = 50 }
  }
  SpyInfo                = { country = "LUX" NumberOfSpies = 3 }

  nationalprovinces      = { 109 }
  ownedprovinces         = { 109 }
  controlledprovinces    = { 109 }

  techapps               = { 2290 1010 1020 1030 13060 13070 1160 5700 5600 6500 6510 14000 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 4
    freedom           = 9
    free_market       = 8
    professional_army = 2
    defense_lobby     = 2
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 385083 } # Marie-Adélaïde
  headofgovernment       = { type = 9 id = 385076 } # Paul Eyschen
  foreignminister        = { type = 9 id = 385072 } # Paul Eyschen
  armamentminister       = { type = 9 id = 385088 } # Mathias Mongenast
  ministerofsecurity     = { type = 9 id = 385092 } # Pierre Braun
}
