pipeline {
    agent any
    
    stages {
     
        stage('Build') {
            steps {
                sh '''
                echo "Creating a build folder"
                mkdir -p build
                echo "generate a build system"
                cmake -S game/ -B build/
                echo "build the app"
                cmake --build build/
                echo 'make'
                make build/
                
                echo "archiving"
                archiveArtifacts artifacts: 'build/*'
                '''
            }
        }
        stage('Test') {
            steps {
                echo 'Testing..'
            }
        }
        stage('Deploy') {
            steps {
               echo 'Deploying....' 
            }
        }
    }
}
