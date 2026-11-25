##############################
# Country definition for NIC #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = NIC
  puppet             = USA
  ai                 = "Minors/NIC_1914.ai"
  ai_settings        = { }
  capital            = 2080 # Managua
  manpower           = 0
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
  }
  SpyInfo                = { country = "NIC" NumberOfSpies = 2 }

  nationalprovinces      = { 2080 2082 2084 2085 2086 2087 2088 2079 2081 2083 }
  ownedprovinces         = { 2080 2082 }
  controlledprovinces    = { 2080 2082 }

  techapps               = { 1160 1170 6500 6510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 2
    freedom           = 4
    free_market       = 7
    professional_army = 2
    defense_lobby     = 8
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 315081 } # Adolfo Díaz
  headofgovernment       = { type = 9 id = 315076 } # Adolfo Díaz
  foreignminister        = { type = 9 id = 315082 } # Bartolomé Martínez González
  armamentminister       = { type = 9 id = 315083 } # Diego Manuel Chamorro Bolaños
  ministerofsecurity     = { type = 9 id = 315087 } # Gilbert D. Hatfield
  ministerofintelligence = { type = 9 id = 315077 } # Emiliano Chamorro
  chiefofstaff           = { type = 9 id = 315084 } # Emiliano Chamorro Vargas
  chiefofarmy            = { type = 9 id = 315085 } # Emiliano Chamorro Vargas
  chiefofnavy            = { type = 9 id = 315086 } # Emiliano Chamorro Vargas

  landunit = {
    id       = { type = 11600 id = 45 }
    name     = "Ejército de Nicaragua"
    location = 2080
    division = {
      id             = { type = 11600 id = 4500 }
      name           = "1a. División de Infantería"
      type           = infantry
      model          = 0
      strength       = 15
    }
  }
}
