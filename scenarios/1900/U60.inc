##############################
# Country definition for U60 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U60
  puppet             = ENG
  ai                 = "Minors/U60_1914.ai"
  ai_settings        = { }
  capital            = 2137 # St. John's
  manpower           = 2
  # Resource Reserves
  energy         = 405
  metal          = 202
  rare_materials = 101
  oil            = 125
  supplies       = 125
  money          = 5
  transports     = 30

  diplomacy = {
    relation = { tag = BEL value = 75 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 65 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = PHI value = 40 }
    relation = { tag = SAF value = 200 }
    relation = { tag = SAU value = 50 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
    relation = { tag = AST value = 200 }
  }
  SpyInfo                = { country = "U60" NumberOfSpies = 1 }

  nationalprovinces      = { 2136 2137 2138 }
  ownedprovinces         = { 2136 2137 2138 }
  controlledprovinces    = { 2136 2137 2138 }

  techapps               = { 1010 1020 3010 3110 3810 6500 6510 8010 8020 8050 8060 8070 8100 8500 13060 13070 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 3
    freedom           = 10
    free_market       = 8
    professional_army = 2
    defense_lobby     = 2
    interventionism   = 6
  }
  headofstate            = { type = 6121 id = 1115001 }
  headofgovernment       = { type = 6121 id = 1115002 }
  foreignminister        = { type = 6121 id = 1115003 }
  armamentminister       = { type = 6121 id = 1115004 }
  ministerofsecurity     = { type = 6121 id = 1115005 }
  ministerofintelligence = { type = 6121 id = 1115006 }
  chiefofstaff           = { type = 6121 id = 1115007 }
  chiefofarmy            = { type = 6121 id = 1115008 }
  chiefofnavy            = { type = 6121 id = 1115009 }
  chiefofair             = { type = 6121 id = 1115010 }

  navalunit = {
    id       = { type = 6121 id = 3 }
    name     = "Newfoundland Transport Fleet"
    location = 2137
    base     = 2137
    division = {
      id             = { type = 6121 id = 4 }
      name           = "Newfoundland Transport Squadron"
      type           = transport
      model          = 0
    }
  }
}
